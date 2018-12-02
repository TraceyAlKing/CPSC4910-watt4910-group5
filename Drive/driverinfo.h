#ifndef DRIVERINFO_H
#define DRIVERINFO_H

#include <QMainWindow>
#include "User.hpp"
#include "Database.hpp"
#include "DatabaseInterface.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"

namespace Ui {
class DriverInfo;
}

class DriverInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit DriverInfo(QWidget *parent = nullptr);
    ~DriverInfo();

    void setDriver(Driver* temp);
    void setSponsor(Sponsor* temp);


private:
    Ui::DriverInfo *ui;
    Driver* driver;
    Sponsor* sponsor;
};

#endif // DRIVERINFO_H
