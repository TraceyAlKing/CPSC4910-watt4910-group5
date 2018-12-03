/********************************************************************************
** Form generated from reading UI file 'createdriver.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDRIVER_H
#define UI_CREATEDRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateDriver
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *address;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *email;
    QLabel *label_6;
    QLineEdit *ln;
    QLabel *label_7;
    QLineEdit *lp;
    QLabel *label_2;
    QLineEdit *phone;
    QLabel *label_5;
    QLineEdit *password;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateDriver)
    {
        if (CreateDriver->objectName().isEmpty())
            CreateDriver->setObjectName(QStringLiteral("CreateDriver"));
        CreateDriver->resize(880, 799);
        CreateDriver->setStyleSheet(QString::fromUtf8("#MainWindow { font: 16pt url(:/fonts/Agane 55 (roman) sign.ttf);}\n"
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
        verticalLayout_2 = new QVBoxLayout(CreateDriver);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(CreateDriver);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_4->setFont(font);

        verticalLayout_6->addWidget(label_4);

        address = new QLineEdit(groupBox_2);
        address->setObjectName(QStringLiteral("address"));

        verticalLayout_6->addWidget(address);


        gridLayout->addLayout(verticalLayout_6, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        name = new QLineEdit(groupBox_2);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout_3->addWidget(name);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        email = new QLineEdit(groupBox_2);
        email->setObjectName(QStringLiteral("email"));

        verticalLayout_3->addWidget(email);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        ln = new QLineEdit(groupBox_2);
        ln->setObjectName(QStringLiteral("ln"));

        verticalLayout_3->addWidget(ln);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        lp = new QLineEdit(groupBox_2);
        lp->setObjectName(QStringLiteral("lp"));

        verticalLayout_3->addWidget(lp);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        phone = new QLineEdit(groupBox_2);
        phone->setObjectName(QStringLiteral("phone"));

        verticalLayout_3->addWidget(phone);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        password = new QLineEdit(groupBox_2);
        password->setObjectName(QStringLiteral("password"));

        verticalLayout_3->addWidget(password);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 1);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(CreateDriver);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(CreateDriver);

        QMetaObject::connectSlotsByName(CreateDriver);
    } // setupUi

    void retranslateUi(QDialog *CreateDriver)
    {
        CreateDriver->setWindowTitle(QApplication::translate("CreateDriver", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("CreateDriver", "Create New Driver", 0));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("CreateDriver", "Address", 0));
        label->setText(QApplication::translate("CreateDriver", "Name", 0));
        label_3->setText(QApplication::translate("CreateDriver", "Email", 0));
        label_6->setText(QApplication::translate("CreateDriver", "License Number", 0));
        label_7->setText(QApplication::translate("CreateDriver", "License Plate Number", 0));
        label_2->setText(QApplication::translate("CreateDriver", "Phone Number", 0));
        label_5->setText(QApplication::translate("CreateDriver", "Password", 0));
        pushButton->setText(QApplication::translate("CreateDriver", "Add Driver", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateDriver: public Ui_CreateDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDRIVER_H
