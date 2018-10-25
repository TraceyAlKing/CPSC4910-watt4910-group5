#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    w.show();

    return a.exec();

    try{
     // db().init();
    }catch(const std::exception&){
      return EXIT_FAILURE;
    }
}
