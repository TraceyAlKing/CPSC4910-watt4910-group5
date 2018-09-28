#include "driverpage.h"
#include "ui_driverpage.h"

DriverPage::DriverPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DriverPage)
{
    ui->setupUi(this);
}

DriverPage::~DriverPage()
{
    delete ui;
}
