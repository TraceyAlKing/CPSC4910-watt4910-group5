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
    void setSponsor(Sponsor* temp, DatabaseInterface dbinter);

    void on_pushButton_driver_name_Change_clicked();
    void on_pushButton_driver_email_Change_clicked();
    void on_pushButton_driver_ln_Change_clicked();
    void on_pushButton_driver_phone_Change_clicked();
    void on_pushButton_driver_LP_Add_clicked();
    void on_pushButton_driver_address_Add_clicked();
    void on_add_points_clicked();
    void on_subtract_points_clicked();

    void updateDriver();


private:
    Ui::DriverInfoPage *ui;
    Driver* driver;
    Sponsor* sponsor;
    DatabaseInterface dbi;
};

#endif // DRIVERINFOPAGE_H
