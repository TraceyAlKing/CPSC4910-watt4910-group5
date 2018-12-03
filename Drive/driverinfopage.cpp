#include "driverinfopage.h"
#include "ui_driverinfopage.h"

DriverInfoPage::DriverInfoPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverInfoPage)
{
    ui->setupUi(this);
}

DriverInfoPage::~DriverInfoPage()
{
    delete ui;
}

void DriverInfoPage::setSponsor(Sponsor* temp, DatabaseInterface dbinter) {
    sponsor = temp;
    dbi = dbinter;
}

void DriverInfoPage::setDriver(Driver* temp) {
    driver = temp;

    ui->lineEdit_driver_email->setText(QString::fromStdString(driver->getEmail()));
    ui->lineEdit_driver_name->setText(QString::fromStdString(driver->getName()));
    ui->lineEdit_driver_address->setText(QString::fromStdString(driver->getAddress()));
    ui->lineEdit_driver_ln->setText(QString::fromStdString(to_string(driver->getLicenseNum())));
    ui->lineEdit_driver_lp->setText(QString::fromStdString(to_string(driver->getFirstPlate())));
    ui->points_label->setNum(driver->getPoints(sponsor->getID()));
}
void DriverInfoPage::on_pushButton_driver_name_Change_clicked()
{
    QString newName = ui->lineEdit_driver_name->text();
    std::string name = newName.toStdString();
    (driver)->setName(name);
    updateDriver();
}

void DriverInfoPage::on_pushButton_driver_email_Change_clicked()
{
    QString newEmail = ui->lineEdit_driver_email->text();
    std::string email = newEmail.toStdString();
    (driver)->setEmail(email);
    updateDriver();
}

void DriverInfoPage::on_pushButton_driver_LP_Add_clicked()
{
    QString newLP = ui->lineEdit_driver_lp->text();
    std::string lp = newLP.toStdString();
    (driver)->addLP(stoi(lp));
    updateDriver();
}

void DriverInfoPage::on_pushButton_driver_ln_Change_clicked()
{
    QString newLN = ui->lineEdit_driver_ln->text();
    std::string ln = newLN.toStdString();
    (driver)->setLNum(stoi(ln));
    updateDriver();
}

void DriverInfoPage::on_pushButton_driver_address_Add_clicked()
{
    QString newAddress = ui->lineEdit_driver_address->text();
    std::string address = newAddress.toStdString();
    (driver)->setAddress(address);
    updateDriver();
}

void DriverInfoPage::updateDriver()
{
    dbi.update(driver);
}
