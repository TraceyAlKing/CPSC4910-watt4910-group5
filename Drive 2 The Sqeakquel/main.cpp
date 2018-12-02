#include "mainwindow.h"
#include <QApplication>
#include "Database.hpp"

int main(int argc, char *argv[])
{
    try{
      db().init();
    }catch(const std::exception&){
      return EXIT_FAILURE;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    w.show();

    return a.exec();
}
