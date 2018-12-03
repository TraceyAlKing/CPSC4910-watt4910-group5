#include "catalogitem.h"
#include "ui_catalogitem.h"

CatalogItem::CatalogItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CatalogItem)
{
    ui->setupUi(this);
}

CatalogItem::~CatalogItem()
{
    delete ui;
}
