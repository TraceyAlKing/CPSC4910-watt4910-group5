#ifndef DRIVERINFOPAGE_H
#define DRIVERINFOPAGE_H

#include <QDialog>
#include "User.hpp"
#include "Database.hpp"
#include "DatabaseInterface.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"

namespace Ui {
class DriverInfoPage;
}

class DriverInfoPage : public QDialog
{
    Q_OBJECT

public:
    explicit DriverInfoPage(QWidget *parent = nullptr);
    ~DriverInfoPage();

    void setDriver(Driver* temp);
    void setSponsor(Sponsor* temp);


private:
    Ui::DriverInfoPage *ui;
    Driver* driver;
    Sponsor* sponsor;
};

#endif // DRIVERINFOPAGE_H
