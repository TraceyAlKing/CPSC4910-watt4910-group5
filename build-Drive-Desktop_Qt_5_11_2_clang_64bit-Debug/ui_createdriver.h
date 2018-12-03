/********************************************************************************
** Form generated from reading UI file 'createdriver.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDRIVER_H
#define UI_CREATEDRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CreateDriver
{
public:

    void setupUi(QDialog *CreateDriver)
    {
        if (CreateDriver->objectName().isEmpty())
            CreateDriver->setObjectName(QStringLiteral("CreateDriver"));
        CreateDriver->resize(400, 300);

        retranslateUi(CreateDriver);

        QMetaObject::connectSlotsByName(CreateDriver);
    } // setupUi

    void retranslateUi(QDialog *CreateDriver)
    {
        CreateDriver->setWindowTitle(QApplication::translate("CreateDriver", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDriver: public Ui_CreateDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDRIVER_H
