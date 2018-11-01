#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "Database.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->showMaximized();
    ui->groupBox->setFixedSize(600,400);

}

MainWindow::~MainWindow()
{
    /*
    for(auto it : driver_list_)
        delete *(&it)->first;
    for(auto it : admin_list_)
        delete it;
    for(auto it : sponsor_list_)
        delete it;
    for(auto it : catalog_list_)
        delete *it;
    for(auto it : item_list_)
        delete *it;
    */
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
    }else if(isSponsor){
        ui->stackedWidget->setCurrentIndex(2);
        CurrUser = temp;
        this->on_sponsor_Home_Button_clicked();
    }else if(isDriver){
        ui->stackedWidget->setCurrentIndex(1);
        ui->stackedWidget_driver->setCurrentIndex(0);
        CurrUser = temp;
        //ui->pointsValue_label->setNum(static_cast<Driver*>(CurrUser)->getPoints());
    }else{
        QMessageBox::warning(this,"Login", "Invalid email and/or password", QMessageBox::Ok);
    }
}

void MainWindow::on_driver_Home_Button_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(0);
}

void MainWindow::on_driver_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_driver_Account_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
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
    std::string* Drivers_ = static_cast<Sponsor*>(CurrUser)->getDrivers();
    for(int i = 0; i<len; i++)
    {
        QString qstr = QString::fromStdString(Drivers_[i]);
        QTableWidgetItem* newItem = new QTableWidgetItem(qstr, 0);
        ui->driver_table->setItem(i, 0, newItem);
    }
}

void MainWindow::on_driver_History_Button_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
}
