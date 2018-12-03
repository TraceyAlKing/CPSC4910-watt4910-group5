#include "createdriver.h"
#include "ui_createdriver.h"

CreateDriver::CreateDriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateDriver)
{
    ui->setupUi(this);
}

CreateDriver::~CreateDriver()
{
    delete ui;
}
