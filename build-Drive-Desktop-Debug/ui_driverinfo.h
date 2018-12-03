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
    QLineEdit *name_label;
    QPushButton *pushButton_driver_name_Change;
    QLabel *label_3;
    QLineEdit *email_label;
    QPushButton *pushButton_driver_email_Change;
    QLabel *label_5;
    QLabel *points_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_pointUpdate;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_points;
    QPushButton *subtract_points;
    QLabel *label_6;
    QLineEdit *ln_label;
    QPushButton *pushButton_driver_ln_Change;
    QLabel *label_7;
    QLineEdit *lp_label;
    QPushButton *pushButton_driver_lp_Change;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTableWidget *tableWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *address_label;
    QPushButton *pushButton_driver_address_Add;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DriverInfo)
    {
        if (DriverInfo->objectName().isEmpty())
            DriverInfo->setObjectName(QStringLiteral("DriverInfo"));
        DriverInfo->resize(800, 600);
        DriverInfo->setStyleSheet(QString::fromUtf8("#MainWindow { font: 16pt \"Agan\303\250 S\"; }\n"
"#MainWindow { background-color : #9CAFD1  }\n"
"QPushButton {color : white;\n"
"background-color : #3562B0;\n"
"border-radius: 10px;}\n"
"QPushButton{ font: 81 14pt \"AXIS Extra Bold\";}\n"
"#pushButton_Login_2{ font: 81 18pt \"AXIS Extra Bold\";\n"
"border-radius: 25px; }\n"
"QGroupBox{ background-color : #EEEEEE;}\n"
"QLabel{  font: 16pt \"Agan\303\250 S\"; }\n"
"QStackedWidget{ background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  stop:0 #202020, stop: 0.4 #303030, stop:1 #353535)}"));
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
        font.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        name_label = new QLineEdit(groupBox);
        name_label->setObjectName(QStringLiteral("name_label"));

        verticalLayout_3->addWidget(name_label);

        pushButton_driver_name_Change = new QPushButton(groupBox);
        pushButton_driver_name_Change->setObjectName(QStringLiteral("pushButton_driver_name_Change"));

        verticalLayout_3->addWidget(pushButton_driver_name_Change);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        email_label = new QLineEdit(groupBox);
        email_label->setObjectName(QStringLiteral("email_label"));

        verticalLayout_3->addWidget(email_label);

        pushButton_driver_email_Change = new QPushButton(groupBox);
        pushButton_driver_email_Change->setObjectName(QStringLiteral("pushButton_driver_email_Change"));

        verticalLayout_3->addWidget(pushButton_driver_email_Change);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        points_label = new QLabel(groupBox);
        points_label->setObjectName(QStringLiteral("points_label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        points_label->setFont(font1);

        verticalLayout_3->addWidget(points_label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_pointUpdate = new QLineEdit(groupBox);
        lineEdit_pointUpdate->setObjectName(QStringLiteral("lineEdit_pointUpdate"));

        verticalLayout_2->addWidget(lineEdit_pointUpdate);

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

        ln_label = new QLineEdit(groupBox);
        ln_label->setObjectName(QStringLiteral("ln_label"));

        verticalLayout_3->addWidget(ln_label);

        pushButton_driver_ln_Change = new QPushButton(groupBox);
        pushButton_driver_ln_Change->setObjectName(QStringLiteral("pushButton_driver_ln_Change"));

        verticalLayout_3->addWidget(pushButton_driver_ln_Change);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        lp_label = new QLineEdit(groupBox);
        lp_label->setObjectName(QStringLiteral("lp_label"));

        verticalLayout_3->addWidget(lp_label);

        pushButton_driver_lp_Change = new QPushButton(groupBox);
        pushButton_driver_lp_Change->setObjectName(QStringLiteral("pushButton_driver_lp_Change"));

        verticalLayout_3->addWidget(pushButton_driver_lp_Change);


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

        address_label = new QLineEdit(groupBox);
        address_label->setObjectName(QStringLiteral("address_label"));

        verticalLayout_4->addWidget(address_label);

        pushButton_driver_address_Add = new QPushButton(groupBox);
        pushButton_driver_address_Add->setObjectName(QStringLiteral("pushButton_driver_address_Add"));

        verticalLayout_4->addWidget(pushButton_driver_address_Add);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        DriverInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DriverInfo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        pushButton_driver_name_Change->setText(QApplication::translate("DriverInfo", "Change", 0));
        label_3->setText(QApplication::translate("DriverInfo", "Email", 0));
        pushButton_driver_email_Change->setText(QApplication::translate("DriverInfo", "Change", 0));
        label_5->setText(QApplication::translate("DriverInfo", "Points", 0));
        points_label->setText(QApplication::translate("DriverInfo", "0", 0));
        lineEdit_pointUpdate->setText(QApplication::translate("DriverInfo", "Update points", 0));
        add_points->setText(QApplication::translate("DriverInfo", "Add", 0));
        subtract_points->setText(QApplication::translate("DriverInfo", "Subtract", 0));
        label_6->setText(QApplication::translate("DriverInfo", "License Number", 0));
        pushButton_driver_ln_Change->setText(QApplication::translate("DriverInfo", "Change", 0));
        label_7->setText(QApplication::translate("DriverInfo", "License Plate Number", 0));
        pushButton_driver_lp_Change->setText(QApplication::translate("DriverInfo", "Change", 0));
        label_2->setText(QApplication::translate("DriverInfo", "Recent Orders", 0));
        label_4->setText(QApplication::translate("DriverInfo", "Address", 0));
        pushButton_driver_address_Add->setText(QApplication::translate("DriverInfo", "Change", 0));
    } // retranslateUi

};

namespace Ui {
    class DriverInfo: public Ui_DriverInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERINFO_H
