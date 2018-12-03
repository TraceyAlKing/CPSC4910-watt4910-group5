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

void CreateDriver::setSponsor(Sponsor* temp, DatabaseInterface dbinter) {
    sponsor = temp;
    dbi = dbinter;
}

void CreateDriver::addDriver() {
    string name = ui->name->text().toStdString();
    string phone = ui->phone->text().toStdString();
    string lp = ui->lp->text().toStdString();
    string ln = ui->ln->text().toStdString();
    string address = ui->address->text().toStdString();
    string email = ui->email->text().toStdString();
    string password = ui->password->text().toStdString();

    Driver* driver = dbi.createDriver(name, email, phone, password, "0");
    driver->addSponsor(sponsor->getID());
    sponsor->addDriver(driver->getID());

    dbi.update(driver);
    dbi.update(sponsor);
    this->close();
}
