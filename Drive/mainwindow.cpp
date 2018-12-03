#include <stdlib.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "Database.hpp"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/fonts/Axis_Extrabold.otf");
    fontDB.addApplicationFont(":/fonts/Agane 55 (roman) sign.ttf");
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->showMaximized();
    ui->groupBox->setFixedSize(600,400);

}

MainWindow::~MainWindow()
{

    for(std::map<int, Driver*>::iterator it = driver_list_.begin(); it != driver_list_.end(); it++)
        delete it->second;
    for(std::map<int, Admin*>::iterator it = admin_list_.begin(); it != admin_list_.end(); it++)
        delete it->second;
    for(std::map<int, Sponsor*>::iterator it = sponsor_list_.begin(); it != sponsor_list_.end(); it++)
        delete it->second;
    for(std::map<int, Catalog*>::iterator it = catalog_list_.begin(); it != catalog_list_.end(); it++)
        delete it->second;
    for(std::map<int, Item*>::iterator it = item_list_.begin(); it != item_list_.end(); it++)
        delete it->second;
    driver_list_.clear();
    admin_list_.clear();
    sponsor_list_.clear();
    catalog_list_.clear();
    item_list_.clear();

    delete ui;
}

void MainWindow::on_pushButton_Login_2_clicked()
{
    QString qEmail = ui->lineEdit_Username_2->text();
    QString qPassword = ui->lineEdit_Password_2->text();
    std::string email = qEmail.toStdString();
    std::string password = qPassword.toStdString();

    User* temp;
    temp = db().login(email, password);

    Admin* isAdmin = dynamic_cast<Admin*>(temp);
    Sponsor* isSponsor = dynamic_cast<Sponsor*>(temp);
    Driver* isDriver = dynamic_cast<Driver*>(temp);

    if(isAdmin){
        ui->stackedWidget->setCurrentIndex(3);

        CurrUser = temp;
        admin_list_[CurrUser->getID()] = static_cast<Admin*>(CurrUser);

        //@TODO: add admin page here
    }else if(isSponsor){
        ui->stackedWidget->setCurrentIndex(2);

        CurrUser = temp;
        sponsor_list_[CurrUser->getID()] = static_cast<Sponsor*>(CurrUser);

        this->on_sponsor_Home_Button_clicked();
    }else if(isDriver){
        ui->stackedWidget->setCurrentIndex(1);
        ui->stackedWidget_driver->setCurrentIndex(0);
        currSponsor=0;

        CurrUser = temp;
        driver_list_[CurrUser->getID()] = static_cast<Driver*>(CurrUser);
        std::vector<int> driversponsors;
        static_cast<Driver*>(CurrUser)->getSponsors(driversponsors);
        currSponsor = dbi.getSponsor(driversponsors[0]);
        ui->driver_currSponsor->setText(QString::fromStdString(currSponsor->getName()));

       //ui->pointsValue_label->setNum((int)(static_cast<Driver*>(CurrUser)->getPoints()));
        ui->pointsValue_label->setNum(6);
    }else{
        QMessageBox::warning(this,"Login", "Invalid email and/or password", QMessageBox::Ok);
    }
}

void MainWindow::on_driver_Home_Button_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(0);

    //Catalog code
    std::vector<int> mysponsors;    //contains the sponsors of the driver
    static_cast<Driver*>(CurrUser)->getSponsors(mysponsors);

    int catalog_id = currSponsor->getCatalogs();
    Catalog* cata = dbi.getCatalog(catalog_id);
    // do stuff with catalog



    }

void MainWindow::on_driver_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_driver_Account_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
    ui->lineEdit_driver_name->setText(QString::fromStdString(static_cast<Driver*>(CurrUser)->getName()));
    ui->lineEdit_driver_email->setText(QString::fromStdString(static_cast<Driver*>(CurrUser)->getEmail()));
    //@TODO: Need to fix the sponsors
    ui->driver_sponsor_label->setText(QString::fromStdString(currSponsor->getName()));

    ui->lineEdit_driver_ln->setText(QString::fromStdString(std::to_string(static_cast<Driver*>(CurrUser)->getLicenseNum())));
    ui->lineEdit_driver_phone->setText(QString::fromStdString(std::to_string(static_cast<Driver*>(CurrUser)->getPhone())));
    ui->lineEdit_driver_LP->setText(QString::fromStdString(std::to_string(static_cast<Driver*>(CurrUser)->getFirstPlate())));
    ui->lineEdit_driver_address->setText(QString::fromStdString(static_cast<Driver*>(CurrUser)->getAddress()));
}

void MainWindow::on_sponsor_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_sponsor_Account_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(1);
}

void MainWindow::on_sponsor_Home_Button_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(0);
    int len = static_cast<Sponsor*>(CurrUser)->getNumDrivers();
    ui->driver_table->setRowCount(len);
    //@TODO: add actual sponsors here
    static_cast<Sponsor*>(CurrUser)->getDrivers(Drivers_);
    for(int i = 0; i<len; i++)
    {
        QString qstr = QString::fromStdString(dbi.getDriver(Drivers_[i])->getName());
        QTableWidgetItem* newItem = new QTableWidgetItem(qstr, 0);
        ui->driver_table->setItem(i, 0, newItem);
    }
}

void MainWindow::on_driver_table_cellClicked(int row, int column)
{
    Driver* temp = dbi.getDriver(Drivers_[row]);
    DriverInfo d;
    d.setSponsor(static_cast<Sponsor*>(CurrUser));
    d.setDriver(temp);
    d.show();
}

void MainWindow::on_driver_History_Button_clicked()
{
    QMessageBox::warning(this,"Login", "Invalid email and/or password", QMessageBox::Ok);
}

void MainWindow::on_pushButton_driver_name_Change_clicked()
{
    QString newName = ui->lineEdit_driver_name->text();
    std::string name = newName.toStdString();
    static_cast<Driver*>(CurrUser)->setName(name);
    updateDriver();
}

void MainWindow::on_pushButton_driver_email_Change_clicked()
{
    QString newEmail = ui->lineEdit_driver_email->text();
    std::string email = newEmail.toStdString();
    static_cast<Driver*>(CurrUser)->setEmail(email);
    updateDriver();
}

void MainWindow::on_pushButton_driver_phone_Change_clicked()
{
    QString newNumber = ui->lineEdit_driver_phone->text();
    std::string number = newNumber.toStdString();
    static_cast<Driver*>(CurrUser)->setPhone(number);
    updateDriver();
}

void MainWindow::on_pushButton_driver_LP_Add_clicked()
{
    QString newLP = ui->lineEdit_driver_LP->text();
    std::string lp = newLP.toStdString();
    static_cast<Driver*>(CurrUser)->addLP(stoi(lp));
    updateDriver();
}

void MainWindow::on_pushButton_driver_ln_Change_clicked()
{
    QString newLN = ui->lineEdit_driver_ln->text();
    std::string ln = newLN.toStdString();
    static_cast<Driver*>(CurrUser)->setLNum(stoi(ln));
    updateDriver();
}

void MainWindow::on_pushButton_driver_address_Add_clicked()
{
    QString newAddress = ui->lineEdit_driver_address->text();
    std::string address = newAddress.toStdString();
    static_cast<Driver*>(CurrUser)->setAddress(address);
    updateDriver();
}

void MainWindow::updateDriver()
{
    dbi.update(static_cast<Driver*>(CurrUser));
}

void MainWindow::updateSponsor()
{
    dbi.update(static_cast<Sponsor*>(CurrUser));
}

void MainWindow::updateAdmin()
{
    dbi.update(static_cast<Admin*>(CurrUser));
}

void MainWindow::on_tabWidget_currentChanged() {
    if(ui->tabWidget->currentIndex() == 0)
    {
        std::map<int, Driver*>& allDrivers =  dbi.getAllDrivers();
        std::map<int, Admin*>& allAdmins = dbi.getAllAdmins();
        std::map<int, Sponsor*>& allSponsors = dbi.getAllSponsors();
        int len = allDrivers.size()+allAdmins.size()+allSponsors.size();
        ui->admin_all_table->setRowCount(len);

        int i = 0;
        while(i<allDrivers.size())
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allDrivers[i]->getName()));
            ui->admin_all_table->setItem(i, 0, newItem);
            i++;
        }
        while(i<allDrivers.size()+allSponsors.size())
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allSponsors[i]->getName()));
            ui->admin_all_table->setItem(i, 0, newItem);
            i++;
        }
        while(i<len)
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allAdmins[i]->getName()));
            ui->admin_all_table->setItem(i, 0, newItem);
            i++;
        }
    }
    if(ui->tabWidget->currentIndex() == 1)
    {
        std::map<int, Driver*>& allDrivers =  dbi.getAllDrivers();
        int len = allDrivers.size();
        ui->admin_drivers_table->setRowCount(len);
        for(int i = 0; i<len; i++)
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allDrivers[i]->getName()));
            ui->admin_all_table->setItem(i, 0, newItem);
        }
    }
    if(ui->tabWidget->currentIndex() == 2)
    {
        std::map<int, Sponsor*>& allSponsors = dbi.getAllSponsors();
        int len = allSponsors.size();
        ui->admin_sponsors_table->setRowCount(len);
        for(int i = 0; i<len; i++)
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allSponsors[i]->getName()));
            ui->admin_sponsors_table->setItem(i, 0, newItem);
        }
    }
    if(ui->tabWidget->currentIndex() == 3)
    {
        std::map<int, Admin*>& allAdmins = dbi.getAllAdmins();
        int len =allAdmins.size();
        ui->admin_admin_table->setRowCount(len);
        for(int i = 0; i<len; i++)
        {
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(QString::fromStdString(allAdmins[i]->getName()));
            ui->admin_admin_table->setItem(i, 0, newItem);
        }
    }
}
