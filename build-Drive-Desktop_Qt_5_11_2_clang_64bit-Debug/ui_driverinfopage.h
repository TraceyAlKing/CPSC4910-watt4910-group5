/********************************************************************************
** Form generated from reading UI file 'driverinfopage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERINFOPAGE_H
#define UI_DRIVERINFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DriverInfoPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_driver_name;
    QPushButton *pushButton_driver_name_Change;
    QLabel *label_3;
    QLineEdit *lineEdit_driver_email;
    QPushButton *pushButton_driver_email_Change;
    QLabel *label_5;
    QLabel *points_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_driver_points;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_points;
    QPushButton *subtract_points;
    QLabel *label_6;
    QLineEdit *lineEdit_driver_ln;
    QPushButton *pushButton_driver_ln_Change;
    QLabel *label_7;
    QLineEdit *lineEdit_driver_lp;
    QPushButton *pushButton_driver_lp_Change;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTableWidget *tableWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_driver_address;
    QPushButton *pushButton_driver_address_Add;

    void setupUi(QDialog *DriverInfoPage)
    {
        if (DriverInfoPage->objectName().isEmpty())
            DriverInfoPage->setObjectName(QStringLiteral("DriverInfoPage"));
        DriverInfoPage->resize(951, 643);
        DriverInfoPage->setStyleSheet(QString::fromUtf8("#MainWindow { font: 16pt url(:/fonts/Agane 55 (roman) sign.ttf);}\n"
"#MainWindow { background-color : #9CAFD1  }\n"
"QPushButton {color : white;\n"
"background-color : #3562B0;\n"
"border-radius: 10px;}\n"
"QPushButton{ font: 81 14pt;\n"
"font-family: url(:/fonts/Axis_Extrabold.otf);\n"
"  border: none;\n"
"  border-radius: 15px;\n"
"  box-shadow: 0 9px #999;\n"
"  padding: 10px 15px;}\n"
"#pushButton_Login_2{ font: 81 18pt; \n"
"font-family: url(:/fonts/Axis_Extrabold.otf);\n"
"border-radius: 25px; }\n"
"QGroupBox{ background-color : #EEEEEE;}\n"
"QLabel{  font: 16pt \"Agan\303\250 S\"; }\n"
"QStackedWidget{ background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  stop:0 #202020, stop: 0.4 #303030, stop:1 #353535)}\n"
"\n"
"QPushButton:hover {background-color: #3969BD}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #203C6B;\n"
"}"));
        verticalLayout = new QVBoxLayout(DriverInfoPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(DriverInfoPage);
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

        lineEdit_driver_name = new QLineEdit(groupBox);
        lineEdit_driver_name->setObjectName(QStringLiteral("lineEdit_driver_name"));

        verticalLayout_3->addWidget(lineEdit_driver_name);

        pushButton_driver_name_Change = new QPushButton(groupBox);
        pushButton_driver_name_Change->setObjectName(QStringLiteral("pushButton_driver_name_Change"));

        verticalLayout_3->addWidget(pushButton_driver_name_Change);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        lineEdit_driver_email = new QLineEdit(groupBox);
        lineEdit_driver_email->setObjectName(QStringLiteral("lineEdit_driver_email"));

        verticalLayout_3->addWidget(lineEdit_driver_email);

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
        lineEdit_driver_points = new QLineEdit(groupBox);
        lineEdit_driver_points->setObjectName(QStringLiteral("lineEdit_driver_points"));

        verticalLayout_2->addWidget(lineEdit_driver_points);

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

        lineEdit_driver_ln = new QLineEdit(groupBox);
        lineEdit_driver_ln->setObjectName(QStringLiteral("lineEdit_driver_ln"));

        verticalLayout_3->addWidget(lineEdit_driver_ln);

        pushButton_driver_ln_Change = new QPushButton(groupBox);
        pushButton_driver_ln_Change->setObjectName(QStringLiteral("pushButton_driver_ln_Change"));

        verticalLayout_3->addWidget(pushButton_driver_ln_Change);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        lineEdit_driver_lp = new QLineEdit(groupBox);
        lineEdit_driver_lp->setObjectName(QStringLiteral("lineEdit_driver_lp"));

        verticalLayout_3->addWidget(lineEdit_driver_lp);

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

        lineEdit_driver_address = new QLineEdit(groupBox);
        lineEdit_driver_address->setObjectName(QStringLiteral("lineEdit_driver_address"));

        verticalLayout_4->addWidget(lineEdit_driver_address);

        pushButton_driver_address_Add = new QPushButton(groupBox);
        pushButton_driver_address_Add->setObjectName(QStringLiteral("pushButton_driver_address_Add"));

        verticalLayout_4->addWidget(pushButton_driver_address_Add);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DriverInfoPage);

        QMetaObject::connectSlotsByName(DriverInfoPage);
    } // setupUi

    void retranslateUi(QDialog *DriverInfoPage)
    {
        DriverInfoPage->setWindowTitle(QApplication::translate("DriverInfoPage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("DriverInfoPage", "Name", nullptr));
        pushButton_driver_name_Change->setText(QApplication::translate("DriverInfoPage", "Change", nullptr));
        label_3->setText(QApplication::translate("DriverInfoPage", "Email", nullptr));
        pushButton_driver_email_Change->setText(QApplication::translate("DriverInfoPage", "Change", nullptr));
        label_5->setText(QApplication::translate("DriverInfoPage", "Points", nullptr));
        points_label->setText(QApplication::translate("DriverInfoPage", "0", nullptr));
        lineEdit_driver_points->setText(QApplication::translate("DriverInfoPage", "Update points", nullptr));
        add_points->setText(QApplication::translate("DriverInfoPage", "Add", nullptr));
        subtract_points->setText(QApplication::translate("DriverInfoPage", "Subtract", nullptr));
        label_6->setText(QApplication::translate("DriverInfoPage", "License Number", nullptr));
        pushButton_driver_ln_Change->setText(QApplication::translate("DriverInfoPage", "Change", nullptr));
        label_7->setText(QApplication::translate("DriverInfoPage", "License Plate Number", nullptr));
        pushButton_driver_lp_Change->setText(QApplication::translate("DriverInfoPage", "Change", nullptr));
        label_2->setText(QApplication::translate("DriverInfoPage", "Recent Orders", nullptr));
        label_4->setText(QApplication::translate("DriverInfoPage", "Address", nullptr));
        pushButton_driver_address_Add->setText(QApplication::translate("DriverInfoPage", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DriverInfoPage: public Ui_DriverInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERINFOPAGE_H