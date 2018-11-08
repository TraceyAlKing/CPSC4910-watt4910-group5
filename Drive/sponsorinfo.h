#ifndef DRIVERINFO_H
#define DRIVERINFO_H

#include <QMainWindow>

namespace Ui {
class DriverInfo;
}

class DriverInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit DriverInfo(QWidget *parent = nullptr);
    ~DriverInfo();

private:
    Ui::DriverInfo *ui;
};

#endif // DRIVERINFO_H
