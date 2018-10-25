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
    QString qEmail = ui->lineEdit_Username_2->text();
    QString qPassword = ui->lineEdit_Password_2->text();
    std::string email = qEmail.toStdString();
    std::string password = qPassword.toStdString();
    int temp = 0;
   // int temp = db().login(email, password);
    if(email=="d" && password == "p")
        temp = 1;
    if(email=="s" && password == "p")
        temp = 2;
    if(email=="a" && password == "p")
        temp = 3;

    if(temp == 1) {
        ui->stackedWidget->setCurrentIndex(1);
        ui->stackedWidget_driver->setCurrentIndex(0);
        //this->CurrUser = new Driver();
       // currUser = db().getDriver(email);
       // ui->pointsValue_label->setNum(currUser->getPoints());
    }
    else if(temp == 2) {
        ui->stackedWidget->setCurrentIndex(2);
        this->CurrUser = new Sponsor();
    }
    else if(temp == 3) {
        ui->stackedWidget->setCurrentIndex(3);
    }
    else {
        QMessageBox::warning(this,"Login", "Invalid email and/or password", QMessageBox::Ok);
    }
}

void MainWindow::on_driver_Home_Button_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(0);
}

void MainWindow::on_driver_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_driver_Account_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
}

void MainWindow::on_sponsor_Logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_sponsor_Account_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(1);
}

void MainWindow::on_sponsor_Home_Button_clicked()
{
    ui->stackedWidget_sponsor->setCurrentIndex(0);
}

void MainWindow::on_driver_History_Button_clicked()
{
    ui->stackedWidget_driver->setCurrentIndex(1);
}
