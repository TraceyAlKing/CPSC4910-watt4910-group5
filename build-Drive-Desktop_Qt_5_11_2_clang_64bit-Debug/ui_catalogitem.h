/********************************************************************************
** Form generated from reading UI file 'catalogitem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGITEM_H
#define UI_CATALOGITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CatalogItem
{
public:

    void setupUi(QDialog *CatalogItem)
    {
        if (CatalogItem->objectName().isEmpty())
            CatalogItem->setObjectName(QStringLiteral("CatalogItem"));
        CatalogItem->resize(400, 300);

        retranslateUi(CatalogItem);

        QMetaObject::connectSlotsByName(CatalogItem);
    } // setupUi

    void retranslateUi(QDialog *CatalogItem)
    {
        CatalogItem->setWindowTitle(QApplication::translate("CatalogItem", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CatalogItem: public Ui_CatalogItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGITEM_H
