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

void DriverInfoPage::setSponsor(Sponsor* temp) {
    sponsor = temp;
}

void DriverInfoPage::setDriver(Driver* temp) {
    driver = temp;

    ui->email_label->setText(QString::fromStdString(driver->getEmail()));
    ui->name_label->setText(QString::fromStdString(driver->getName()));
    ui->address_label->setText(QString::fromStdString(driver->getAddress()));
    ui->ln_label->setText(QString::fromStdString(to_string(driver->getLicenseNum())));
    ui->lp_label->setText(QString::fromStdString(to_string(driver->getFirstPlate())));
    ui->points_label->setNum(driver->getPoints(sponsor->getID()));
}
