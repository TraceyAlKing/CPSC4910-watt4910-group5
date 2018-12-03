#ifndef CREATEDRIVER_H
#define CREATEDRIVER_H

#include <QDialog>
#include "User.hpp"
#include "Database.hpp"
#include "DatabaseInterface.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"
#include <stdlib.h>

namespace Ui {
class CreateDriver;
}

class CreateDriver : public QDialog
{
    Q_OBJECT

public:
    explicit CreateDriver(QWidget *parent = nullptr);
    ~CreateDriver();
    void setSponsor(Sponsor* temp);

private slots:
    void on_AddDriver_clicked();

private:
    Ui::CreateDriver *ui;
    DatabaseInterface* dbi;
    Sponsor* sponsor;
};

#endif // CREATEDRIVER_H
