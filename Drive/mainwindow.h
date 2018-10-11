#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Login.hpp"
//#include "User.hpp"

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
    void on_driver_Logout_clicked();
    void on_driver_Account_clicked();
    void on_sponsor_Logout_clicked();
    void on_sponsor_Account_clicked();
    void on_sponsor_Home_Button_clicked();

private:
    Ui::MainWindow *ui;
    Login UserLogin;
//    User CurrUser;
};


#endif // MAINWINDOW_H
