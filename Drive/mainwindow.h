#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "User.hpp"
#include "Database.hpp"
#include "DatabaseInterface.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"
#include "Item.hpp"
#include "Catalog.hpp"
#include <createdriver.h>
#include <map>
#include <driverinfopage.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_2_clicked();
    void on_driver_Home_Button_clicked();
    void on_driver_Logout_clicked();
    void on_driver_Account_clicked();
    void on_driver_History_Button_clicked();
    void on_sponsor_Logout_clicked();
    void on_sponsor_Account_clicked();
    void on_sponsor_Home_Button_clicked();

    void on_pushButton_driver_name_Change_clicked();
    void on_pushButton_driver_email_Change_clicked();
    void on_pushButton_driver_ln_Change_clicked();
    void on_pushButton_driver_phone_Change_clicked();
    void on_pushButton_driver_LP_Add_clicked();
    void on_pushButton_driver_address_Add_clicked();

    void on_driver_table_cellClicked(int row, int column);

    void on_new_driver_clicked();

    void on_tabWidget_currentChanged();

    void initDriverCatalog();

private:
    void updateDriver();
    void updateSponsor();
    void updateAdmin();

    Ui::MainWindow *ui;
    User* CurrUser;
    std::vector<int> Drivers_;
    Sponsor* currSponsor;

    //HOW WE WILL HANDLE DATA: IMPORTANT
    //
    //How maps work:
    // std::map<how_you_index_the_data, the_data_type_you_want> name;
    // the int in this case refers to the ID of the object
    //
    //Use these data structures to store what you need for the program
    //
    //Ensure you always delete the objects after you no longer need them
    //
    //Esentially Drivers and Sponsors will store an int of their respective
    //  Sponsors and Drivers. This will be indexed from the list of Drivers
    //  and Sponsors.
    //example:
    //  int id = (static_cast<Driver*>CurrUser)->getSponsor();
    //  Sponsor* mySponsor = sponsor_list_[id]);
    //
    std::map<int, Driver*> driver_list_;
    std::map<int, Admin*> admin_list_;
    std::map<int, Sponsor*> sponsor_list_;
    std::map<int, Catalog*> catalog_list_;
    std::map<int, Item*> item_list_;

    DatabaseInterface* dbi;


};


#endif // MAINWINDOW_H
