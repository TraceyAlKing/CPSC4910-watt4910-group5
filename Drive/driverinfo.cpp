#include "driverinfo.h"
#include "ui_driverinfo.h"

DriverInfo::DriverInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DriverInfo)
{
    ui->setupUi(this);
}

DriverInfo::~DriverInfo()
{
    delete ui;
}

void DriverInfo::setSponsor(Sponsor* temp) {
    sponsor = temp;
}

void DriverInfo::setDriver(Driver* temp) {
    driver = temp;

    ui->email_label->setText(QString::fromStdString(driver->getEmail()));
    ui->name_label->setText(QString::fromStdString(driver->getName()));
    ui->address_label->setText(QString::fromStdString(driver->getAddress()));
    ui->ln_label->setText(QString::fromStdString(to_string(driver->getLicenseNum())));
    ui->lp_label->setText(QString::fromStdString(to_string(driver->getFirstPlate())));
    ui->points_label->setNum(driver->getPoints(sponsor->getID()));
}
