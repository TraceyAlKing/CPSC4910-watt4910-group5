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
