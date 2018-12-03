/********************************************************************************
** Form generated from reading UI file 'catalogitem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGITEM_H
#define UI_CATALOGITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CatalogItem
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *image;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *price;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *purchase;

    void setupUi(QDialog *CatalogItem)
    {
        if (CatalogItem->objectName().isEmpty())
            CatalogItem->setObjectName(QStringLiteral("CatalogItem"));
        CatalogItem->resize(805, 523);
        CatalogItem->setStyleSheet(QString::fromUtf8("#MainWindow { font: 16pt \"Agan\303\250 S\"; }\n"
"#MainWindow { background-color : #9CAFD1  }\n"
"QPushButton {color : white;\n"
"background-color : #3562B0;\n"
"border-radius: 10px;}\n"
"QPushButton{ font: 81 14pt \"AXIS Extra Bold\";\n"
"  border: none;\n"
"  border-radius: 15px;\n"
"  box-shadow: 0 9px #999;\n"
"  padding: 10px 15px;}\n"
"#pushButton_Login_2{ font: 81 18pt \"AXIS Extra Bold\";\n"
"border-radius: 25px; }\n"
"QGroupBox{ background-color : #EEEEEE;}\n"
"QLabel{  font: 16pt \"Agan\303\250 S\"; }\n"
"QStackedWidget{ background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  stop:0 #202020, stop: 0.4 #303030, stop:1 #353535)}\n"
"\n"
"\n"
"\n"
"QPushButton:hover {background-color: #2D5496}\n"
"\n"
"QPushButton:active {\n"
"  background-color: #2D5496;\n"
"  box-shadow: 0 5px #666;\n"
"  transform: translateY(4px);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(CatalogItem);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        image = new QLabel(CatalogItem);
        image->setObjectName(QStringLiteral("image"));
        image->setScaledContents(true);
        image->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(image);

        groupBox = new QGroupBox(CatalogItem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        name = new QLabel(groupBox);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout->addWidget(name);

        price = new QLabel(groupBox);
        price->setObjectName(QStringLiteral("price"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        price->setFont(font);
        price->setStyleSheet(QString::fromUtf8(" font: 12pt \"Agan\303\250 S\";"));

        verticalLayout->addWidget(price);

        description = new QTextEdit(groupBox);
        description->setObjectName(QStringLiteral("description"));

        verticalLayout->addWidget(description);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        purchase = new QPushButton(CatalogItem);
        purchase->setObjectName(QStringLiteral("purchase"));
        purchase->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout->addWidget(purchase);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CatalogItem);

        QMetaObject::connectSlotsByName(CatalogItem);
    } // setupUi

    void retranslateUi(QDialog *CatalogItem)
    {
        CatalogItem->setWindowTitle(QApplication::translate("CatalogItem", "Dialog", 0));
        image->setText(QApplication::translate("CatalogItem", "<html><head/><body><p><img src=\":/images/61510352-holding-banana.jpg\"/></p></body></html>", 0));
        groupBox->setTitle(QString());
        name->setText(QApplication::translate("CatalogItem", "Just a Big Banana", 0));
        price->setText(QApplication::translate("CatalogItem", "$32.99", 0));
        description->setHtml(QApplication::translate("CatalogItem", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It's big.  It's a banana. Banana 2.0: new and improved.  Now with potassium.</p></body></html>", 0));
        purchase->setText(QApplication::translate("CatalogItem", "Purchase", 0));
    } // retranslateUi

};

namespace Ui {
    class CatalogItem: public Ui_CatalogItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGITEM_H
