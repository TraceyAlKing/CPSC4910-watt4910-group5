#ifndef CREATEDRIVER_H
#define CREATEDRIVER_H

#include <QDialog>

namespace Ui {
class CreateDriver;
}

class CreateDriver : public QDialog
{
    Q_OBJECT

public:
    explicit CreateDriver(QWidget *parent = nullptr);
    ~CreateDriver();

private:
    Ui::CreateDriver *ui;
};

#endif // CREATEDRIVER_H
