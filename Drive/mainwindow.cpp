#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    QString username = ui->lineEdit_Username_2->text();
    QString password = ui->lineEdit_Password_2->text();

    if(username ==  "test" && password == "test") {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox::warning(this,"Login", "Invalid username and/or password");
    }
}
