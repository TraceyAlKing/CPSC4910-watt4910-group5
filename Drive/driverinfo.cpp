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

void DriverInfo::setDriver(Driver temp) {
    driver = temp;

    ui->email_label->setText(QString::fromStdString(driver.getEmail()));
    ui->name_label->setText(QString::fromStdString(driver.getName()));
    ui->address_label->setText(QString::fromStdString(driver.getAddress()));
    ui->ln_label->setNum(driver.getLicenseNum());
    ui->lp_label->setNum(driver.getPlates());
    ui->points_label->setNum(driver.getPoints(sponsor->getID()));
}
