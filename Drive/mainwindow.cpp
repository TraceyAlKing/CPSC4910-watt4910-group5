#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Login.cpp"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->showMaximized();
    ui->groupBox->setFixedSize(600,400);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_2_clicked()
{
    QString qUsername = ui->lineEdit_Username_2->text();
    QString qPassword = ui->lineEdit_Password_2->text();
    UserLogin.SetUsername(qUsername.toStdString());
    std::string password = qPassword.toStdString();

    if(UserLogin.Validate(password) == "driver") {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(UserLogin.Validate(password) == "sponsor") {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(UserLogin.Validate(password) == "admin") {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox::warning(this,"Login", "Invalid username and/or password");
    }
}

void MainWindow::on_driver_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    UserLogin.Logout();
}

void MainWindow::on_driver_Account_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
}

void MainWindow::on_sponsor_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    UserLogin.Logout();
}

void MainWindow::on_sponsor_Account_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(1);
}

void MainWindow::on_sponsor_Home_Button_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(0);
}
