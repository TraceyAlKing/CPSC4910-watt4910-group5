#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "User.hpp"
#include "Database.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"
#include "Item.hpp"
#include "Catalog.hpp"
#include <map>

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

private:
    Ui::MainWindow *ui;
    User* CurrUser;

    //HOW WE WILL HANDLE DATA: IMPORTANT
    //
    //How maps work:
    // std::map<the_data_type_you_want, how_you_index_the_data> name;
    // the int in this case refers to the ID of the object
    //
    //Use these data structures to store what you need for the program
    //
    //Ensure you always delete the objects after you no longer need them
    std::map<Driver*, int> driver_list_;
    std::map<Admin*, int> admin_list_;
    std::map<Sponsor*, int> sponsor_list_;
    std::map<Catalog*, int> catalog_list_;
    std::map<Item*, int> item_list_;


};


#endif // MAINWINDOW_H
