#-------------------------------------------------
#
# Project created by QtCreator 2018-09-18T17:39:44
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Drive
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    driverinfo.cpp \
    ../Driver.cpp \
    ../Sponsor.cpp \
    ../User.cpp \
    ../Admin.cpp \
    ../Catalog.cpp \
    ../Database.cpp \
    ../Item.cpp \
    ../DatabaseInterface.cpp \
    catalogitem.cpp \
    driverinfopage.cpp \
    createdriver.cpp

HEADERS += \
        mainwindow.h \
    driverinfo.h \
    ../Driver.hpp \
    ../Sponsor.hpp \
    ../User.hpp \
    ../Admin.hpp \
    ../Database.hpp \
    ../Item.hpp \
    ../Catalog.hpp \
    ../DatabaseInterface.hpp \
    catalogitem.h \
    driverinfopage.h \
    createdriver.h

FORMS += \
    mainwindow.ui \
    driverinfo.ui \
    catalogitem.ui \
    driverinfopage.ui \
    createdriver.ui

INCLUDEPATH += ../
DEPENDPATH += $${INCLUDEPATH}

macx {
    INCLUDEPATH += -I /usr/local/mysql-connector-c++/include -I /usr/local/mysql-connector-c++/include/jdbc -I /usr/local/include/
    DEPENDPATH += $${INCLUDEPATH}
    LIBS += -L/usr/local/mysql-connector-c++/lib64 -lmysqlcppconn -L/usr/local/lib -lboost_filesystem-mt -L/usr/local/lib -lboost_thread-mt
} win32 {
    INCLUDEPATH += -I "C:\Program Files\MySQL\Connector C++ 8.0\include" -I "C:\Program Files\MySQL\Connector C++ 8.0\include\jdbc" -I C:/Users/Will/Documents/boost_1_68_0/boost_1_68_0
    DEPENDPATH += $${INCLUDEPATH}
    LIBS += -L/"C:\Program Files\MySQL\Connector C++ 8.0\lib64" -lmysqlcppconn -L/C:/Users/Will/Documents/boost_1_68_0/boost_1_68_0 -lboost_filesystem -L/C:/Users/Will/Documents/boost_1_68_0/boost_1_68_0/lib -lboost_thread
} unix: !macx {
    INCLUDEPATH += -I /include -I /include/jdbc
    DEPENDPATH += $${INCLUDEPATH}
    LIBS += -L/usr/lib -lmysqlcppconn -lboost_filesystem -lboost_thread
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    fonts.qrc \
    imgs.qrc
