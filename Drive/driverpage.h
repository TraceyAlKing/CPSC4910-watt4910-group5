#ifndef DRIVERPAGE_H
#define DRIVERPAGE_H

#include <QMainWindow>

namespace Ui {
class DriverPage;
}

class DriverPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit DriverPage(QWidget *parent = nullptr);
    ~DriverPage();

private:
    Ui::DriverPage *ui;
};

#endif // DRIVERPAGE_H
