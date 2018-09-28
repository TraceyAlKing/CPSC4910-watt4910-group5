/********************************************************************************
** Form generated from reading UI file 'driverpage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERPAGE_H
#define UI_DRIVERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverPage
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DriverPage)
    {
        if (DriverPage->objectName().isEmpty())
            DriverPage->setObjectName(QStringLiteral("DriverPage"));
        DriverPage->resize(800, 600);
        menubar = new QMenuBar(DriverPage);
        menubar->setObjectName(QStringLiteral("menubar"));
        DriverPage->setMenuBar(menubar);
        centralwidget = new QWidget(DriverPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        DriverPage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DriverPage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DriverPage->setStatusBar(statusbar);

        retranslateUi(DriverPage);

        QMetaObject::connectSlotsByName(DriverPage);
    } // setupUi

    void retranslateUi(QMainWindow *DriverPage)
    {
        DriverPage->setWindowTitle(QApplication::translate("DriverPage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DriverPage: public Ui_DriverPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERPAGE_H
