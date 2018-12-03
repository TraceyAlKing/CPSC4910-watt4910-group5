#ifndef CATALOGITEM_H
#define CATALOGITEM_H

#include <QDialog>

namespace Ui {
class CatalogItem;
}

class CatalogItem : public QDialog
{
    Q_OBJECT

public:
    explicit CatalogItem(QWidget *parent = nullptr);
    ~CatalogItem();

private:
    Ui::CatalogItem *ui;
};

#endif // CATALOGITEM_H
