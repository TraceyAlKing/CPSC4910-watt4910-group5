/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_Login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QWidget *layoutWidget1;
    QVBoxLayout *youDick;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(916, 745);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 20, 331, 261));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignCenter);
        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(110, 170, 121, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy2);
        pushButton_Login->setMinimumSize(QSize(80, 16));
        pushButton_Login->setBaseSize(QSize(80, 16));
        pushButton_Login->setLayoutDirection(Qt::RightToLeft);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 201, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Username = new QLabel(layoutWidget);
        label_Username->setObjectName(QStringLiteral("label_Username"));
        label_Username->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_Username->sizePolicy().hasHeightForWidth());
        label_Username->setSizePolicy(sizePolicy3);
        label_Username->setMinimumSize(QSize(45, 0));

        verticalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(layoutWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_Username);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 100, 201, 62));
        youDick = new QVBoxLayout(layoutWidget1);
        youDick->setSpacing(6);
        youDick->setContentsMargins(11, 11, 11, 11);
        youDick->setObjectName(QStringLiteral("youDick"));
        youDick->setContentsMargins(2, 0, 0, 0);
        label_Password = new QLabel(layoutWidget1);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        sizePolicy3.setHeightForWidth(label_Password->sizePolicy().hasHeightForWidth());
        label_Password->setSizePolicy(sizePolicy3);
        label_Password->setMinimumSize(QSize(45, 0));

        youDick->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(layoutWidget1);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        youDick->addWidget(lineEdit_Password);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 916, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign In", nullptr));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label_Username->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_Password->setText(QApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
