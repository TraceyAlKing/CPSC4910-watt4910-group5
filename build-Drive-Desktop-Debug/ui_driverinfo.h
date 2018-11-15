/********************************************************************************
** Form generated from reading UI file 'driverinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERINFO_H
#define UI_DRIVERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverInfo
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *name_label;
    QLabel *label_3;
    QLabel *email_label;
    QLabel *points_label;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_points;
    QPushButton *subtract_points;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTableWidget *tableWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DriverInfo)
    {
        if (DriverInfo->objectName().isEmpty())
            DriverInfo->setObjectName(QStringLiteral("DriverInfo"));
        DriverInfo->resize(800, 600);
        centralwidget = new QWidget(DriverInfo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        name_label = new QLabel(groupBox);
        name_label->setObjectName(QStringLiteral("name_label"));
        QFont font1;
        font1.setPointSize(14);
        name_label->setFont(font1);

        verticalLayout_3->addWidget(name_label);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        email_label = new QLabel(groupBox);
        email_label->setObjectName(QStringLiteral("email_label"));
        email_label->setFont(font1);

        verticalLayout_3->addWidget(email_label);

        points_label = new QLabel(groupBox);
        points_label->setObjectName(QStringLiteral("points_label"));
        points_label->setFont(font1);

        verticalLayout_3->addWidget(points_label);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        add_points = new QPushButton(groupBox);
        add_points->setObjectName(QStringLiteral("add_points"));

        horizontalLayout->addWidget(add_points);

        subtract_points = new QPushButton(groupBox);
        subtract_points->setObjectName(QStringLiteral("subtract_points"));

        horizontalLayout->addWidget(subtract_points);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_5->addWidget(label_2);

        tableWidget_3 = new QTableWidget(groupBox);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));

        verticalLayout_5->addWidget(tableWidget_3);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        tableWidget_2 = new QTableWidget(groupBox);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        verticalLayout_4->addWidget(tableWidget_2);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        DriverInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DriverInfo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        DriverInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(DriverInfo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DriverInfo->setStatusBar(statusbar);

        retranslateUi(DriverInfo);

        QMetaObject::connectSlotsByName(DriverInfo);
    } // setupUi

    void retranslateUi(QMainWindow *DriverInfo)
    {
        DriverInfo->setWindowTitle(QApplication::translate("DriverInfo", "MainWindow", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("DriverInfo", "Name", 0));
        name_label->setText(QApplication::translate("DriverInfo", "Emilio Estevez", 0));
        label_3->setText(QApplication::translate("DriverInfo", "Email", 0));
        email_label->setText(QApplication::translate("DriverInfo", "iwasinthebreakfastclub@yahoo.com", 0));
        points_label->setText(QApplication::translate("DriverInfo", "0", 0));
        label_5->setText(QApplication::translate("DriverInfo", "Points", 0));
        lineEdit->setText(QApplication::translate("DriverInfo", "Update points", 0));
        add_points->setText(QApplication::translate("DriverInfo", "Add", 0));
        subtract_points->setText(QApplication::translate("DriverInfo", "Subtract", 0));
        label_6->setText(QApplication::translate("DriverInfo", "License Number", 0));
        label_8->setText(QApplication::translate("DriverInfo", "TextLabel", 0));
        label_7->setText(QApplication::translate("DriverInfo", "License Plate Numbers", 0));
        label_2->setText(QApplication::translate("DriverInfo", "Recent Orders", 0));
        label_4->setText(QApplication::translate("DriverInfo", "Addresses", 0));
    } // retranslateUi

};

namespace Ui {
    class DriverInfo: public Ui_DriverInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERINFO_H
