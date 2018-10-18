#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../User.hpp"
#include "../Database.hpp"
#include "../Driver.hpp"
#include "../Sponsor.hpp"
#include "../Admin.hpp"

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
};


#endif // MAINWINDOW_H
