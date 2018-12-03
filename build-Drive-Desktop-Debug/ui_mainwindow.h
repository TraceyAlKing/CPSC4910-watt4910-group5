/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Username_2;
    QLineEdit *lineEdit_Username_2;
    QVBoxLayout *youDick_2;
    QLabel *label_Password_2;
    QLineEdit *lineEdit_Password_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_Login_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *logo;
    QSpacerItem *verticalSpacer_2;
    QWidget *driver_home;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *point_Layout;
    QGroupBox *pointBox;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *pointbox_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *pointsValue_label;
    QLabel *label_Points_Total;
    QLabel *pointsDollar_label;
    QPushButton *driver_Home_Button;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *driver_Account;
    QPushButton *driver_Logout;
    QGroupBox *historyBox;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label;
    QLabel *driver_currSponsor;
    QPushButton *pushButton_sponsorSwitch;
    QStackedWidget *stackedWidget_driver;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_9;
    QTableWidget *driver_catalog;
    QWidget *driver_account;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QLineEdit *lineEdit_driver_name;
    QPushButton *pushButton_driver__Name_Change;
    QLabel *label_4;
    QLineEdit *lineEdit_driver_email;
    QPushButton *pushButton_driver_Email_Change;
    QLabel *label_7;
    QLabel *driver_sponsor_label;
    QLabel *label_5;
    QLineEdit *lineEdit_driver_LP;
    QPushButton *pushButton_driver_LP_Add;
    QLabel *label_6;
    QLineEdit *lineEdit_driver_ln;
    QPushButton *pushButton_driver_ln_Change;
    QLabel *label_9;
    QLineEdit *lineEdit_driver_phone;
    QPushButton *pushButton_driver_phone_Change;
    QLabel *label_10;
    QLineEdit *lineEdit_driver_address;
    QPushButton *pushButton_driver_address_Add;
    QWidget *sponsor_home;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *sponsor_Home_Button;
    QPushButton *sponsor_Products;
    QPushButton *sponsor_Account;
    QPushButton *sponsor_Logout;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QStackedWidget *stackedWidget_sponsor;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *driver_table;
    QWidget *sponsor_home_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_16;
    QLineEdit *lineEdit_sponsor_name;
    QPushButton *pushButton_sponsor_Name_Change;
    QLabel *label_17;
    QLineEdit *lineEdit_sponsor_email;
    QPushButton *pushButton_sponsor_email_Change;
    QLabel *label_18;
    QLineEdit *lineEdit_sponsor_phone;
    QPushButton *pushButton_sponsor_phone_Change;
    QLabel *label_14;
    QLineEdit *lineEdit_sponsor_address;
    QPushButton *pushButton_sponsor_address_Add;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *all_search;
    QPushButton *admin_search_button;
    QTableWidget *admin_all_table;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout;
    QLineEdit *driver_search;
    QPushButton *driver_search_button;
    QTableWidget *admin_drivers_table;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *sponsor_search;
    QPushButton *sponsor_search_button;
    QTableWidget *admin_sponsors_table;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *admin_search;
    QPushButton *admin_search_button_2;
    QTableWidget *admin_admin_table;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *products_search;
    QPushButton *products_search_button;
    QTableWidget *tableWidget_8;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1067, 642);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setSizeIncrement(QSize(1, 1));
        MainWindow->setBaseSize(QSize(800, 600));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow { font: 16pt url(:/fonts/Agane 55 (roman) sign.ttf);}\n"
"#MainWindow { background-color : #9CAFD1  }\n"
"QPushButton {color : white;\n"
"background-color : #3562B0;\n"
"border-radius: 10px;}\n"
"QPushButton{ font: 81 14pt;\n"
"font-family: url(:/fonts/Axis_Extrabold.otf);\n"
"  border: none;\n"
"  border-radius: 15px;\n"
"  box-shadow: 0 9px #999;\n"
"  padding: 10px 15px;}\n"
"#pushButton_Login_2{ font: 81 18pt; \n"
"font-family: url(:/fonts/Axis_Extrabold.otf);\n"
"border-radius: 25px; }\n"
"QGroupBox{ background-color : #EEEEEE;}\n"
"QLabel{  font: 16pt \"Agan\303\250 S\"; }\n"
"QStackedWidget{ background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  stop:0 #202020, stop: 0.4 #303030, stop:1 #353535)}\n"
"\n"
"QPushButton:hover {background-color: #3969BD}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #203C6B;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setSizeIncrement(QSize(1, 1));
        stackedWidget->setBaseSize(QSize(800, 550));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        login_page->setSizeIncrement(QSize(1, 1));
        gridLayout_4 = new QGridLayout(login_page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(login_page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setSizeIncrement(QSize(1, 1));
        groupBox->setBaseSize(QSize(300, 250));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Username_2 = new QLabel(groupBox);
        label_Username_2->setObjectName(QStringLiteral("label_Username_2"));
        label_Username_2->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(label_Username_2->sizePolicy().hasHeightForWidth());
        label_Username_2->setSizePolicy(sizePolicy3);
        label_Username_2->setMinimumSize(QSize(45, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_Username_2->setFont(font);

        verticalLayout_2->addWidget(label_Username_2);

        lineEdit_Username_2 = new QLineEdit(groupBox);
        lineEdit_Username_2->setObjectName(QStringLiteral("lineEdit_Username_2"));
        sizePolicy3.setHeightForWidth(lineEdit_Username_2->sizePolicy().hasHeightForWidth());
        lineEdit_Username_2->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(14);
        lineEdit_Username_2->setFont(font1);
        lineEdit_Username_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_Username_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        youDick_2 = new QVBoxLayout();
        youDick_2->setSpacing(6);
        youDick_2->setObjectName(QStringLiteral("youDick_2"));
        youDick_2->setContentsMargins(2, -1, -1, -1);
        label_Password_2 = new QLabel(groupBox);
        label_Password_2->setObjectName(QStringLiteral("label_Password_2"));
        sizePolicy3.setHeightForWidth(label_Password_2->sizePolicy().hasHeightForWidth());
        label_Password_2->setSizePolicy(sizePolicy3);
        label_Password_2->setMinimumSize(QSize(45, 0));
        label_Password_2->setFont(font);

        youDick_2->addWidget(label_Password_2);

        lineEdit_Password_2 = new QLineEdit(groupBox);
        lineEdit_Password_2->setObjectName(QStringLiteral("lineEdit_Password_2"));
        sizePolicy3.setHeightForWidth(lineEdit_Password_2->sizePolicy().hasHeightForWidth());
        lineEdit_Password_2->setSizePolicy(sizePolicy3);
        lineEdit_Password_2->setFont(font1);
        lineEdit_Password_2->setEchoMode(QLineEdit::Password);
        lineEdit_Password_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        youDick_2->addWidget(lineEdit_Password_2);


        verticalLayout_3->addLayout(youDick_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton_Login_2 = new QPushButton(groupBox);
        pushButton_Login_2->setObjectName(QStringLiteral("pushButton_Login_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(pushButton_Login_2->sizePolicy().hasHeightForWidth());
        pushButton_Login_2->setSizePolicy(sizePolicy4);
        pushButton_Login_2->setMinimumSize(QSize(80, 16));
        pushButton_Login_2->setBaseSize(QSize(80, 16));
        QFont font2;
        font2.setFamily(QStringLiteral(":/fonts/Axis_Extrabold.otf"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(10);
        pushButton_Login_2->setFont(font2);
        pushButton_Login_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_Login_2->setStyleSheet(QStringLiteral("font-size : 40px"));

        verticalLayout_3->addWidget(pushButton_Login_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        gridLayout_4->addWidget(groupBox, 2, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 2, 1, 1);

        logo = new QLabel(login_page);
        logo->setObjectName(QStringLiteral("logo"));
        QFont font3;
        font3.setFamily(QStringLiteral(":/fonts/Axis_Extrabold.otf"));
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(10);
        logo->setFont(font3);
        logo->setStyleSheet(QLatin1String("font: 81 52px;\n"
"font-family: url(:/fonts/Axis_Extrabold.otf);\n"
"font-style: italic; \n"
"background-color : #E84F37;\n"
"color : white;"));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(logo, 1, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        stackedWidget->addWidget(login_page);
        driver_home = new QWidget();
        driver_home->setObjectName(QStringLiteral("driver_home"));
        sizePolicy1.setHeightForWidth(driver_home->sizePolicy().hasHeightForWidth());
        driver_home->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(driver_home);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        point_Layout = new QVBoxLayout();
        point_Layout->setSpacing(6);
        point_Layout->setObjectName(QStringLiteral("point_Layout"));
        point_Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pointBox = new QGroupBox(driver_home);
        pointBox->setObjectName(QStringLiteral("pointBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pointBox->sizePolicy().hasHeightForWidth());
        pointBox->setSizePolicy(sizePolicy5);
        pointBox->setStyleSheet(QStringLiteral("#pointbox_2 {background-color : #9CAFD1;}"));
        verticalLayout_4 = new QVBoxLayout(pointBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        pointbox_2 = new QGroupBox(pointBox);
        pointbox_2->setObjectName(QStringLiteral("pointbox_2"));
        pointbox_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Agan\303\250 S\";\n"
"background-color : #E84F37;\n"
"color : white;\n"
"border-radius : 14px;"));
        verticalLayout_10 = new QVBoxLayout(pointbox_2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pointsValue_label = new QLabel(pointbox_2);
        pointsValue_label->setObjectName(QStringLiteral("pointsValue_label"));
        QFont font4;
        font4.setFamily(QStringLiteral("AXIS Extra Bold"));
        font4.setPointSize(34);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pointsValue_label->setFont(font4);
        pointsValue_label->setStyleSheet(QStringLiteral("font: 34pt \"AXIS Extra Bold\";"));
        pointsValue_label->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(pointsValue_label);

        label_Points_Total = new QLabel(pointbox_2);
        label_Points_Total->setObjectName(QStringLiteral("label_Points_Total"));
        label_Points_Total->setFont(font);
        label_Points_Total->setScaledContents(true);
        label_Points_Total->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_Points_Total);

        pointsDollar_label = new QLabel(pointbox_2);
        pointsDollar_label->setObjectName(QStringLiteral("pointsDollar_label"));
        pointsDollar_label->setFont(font);
        pointsDollar_label->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(pointsDollar_label);


        verticalLayout_4->addWidget(pointbox_2);

        driver_Home_Button = new QPushButton(pointBox);
        driver_Home_Button->setObjectName(QStringLiteral("driver_Home_Button"));
        QFont font5;
        font5.setFamily(QStringLiteral(":/fonts/Axis_Extrabold.otf"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(10);
        driver_Home_Button->setFont(font5);

        verticalLayout_4->addWidget(driver_Home_Button);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        driver_Account = new QPushButton(pointBox);
        driver_Account->setObjectName(QStringLiteral("driver_Account"));
        driver_Account->setFont(font5);

        horizontalLayout_2->addWidget(driver_Account);

        driver_Logout = new QPushButton(pointBox);
        driver_Logout->setObjectName(QStringLiteral("driver_Logout"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(driver_Logout->sizePolicy().hasHeightForWidth());
        driver_Logout->setSizePolicy(sizePolicy6);
        driver_Logout->setFont(font5);

        horizontalLayout_2->addWidget(driver_Logout);


        verticalLayout_4->addLayout(horizontalLayout_2);


        point_Layout->addWidget(pointBox);

        historyBox = new QGroupBox(driver_home);
        historyBox->setObjectName(QStringLiteral("historyBox"));
        sizePolicy1.setHeightForWidth(historyBox->sizePolicy().hasHeightForWidth());
        historyBox->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(historyBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_4 = new QGroupBox(historyBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_15 = new QVBoxLayout(groupBox_4);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label);

        driver_currSponsor = new QLabel(groupBox_4);
        driver_currSponsor->setObjectName(QStringLiteral("driver_currSponsor"));
        driver_currSponsor->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(driver_currSponsor);


        verticalLayout_5->addWidget(groupBox_4);

        pushButton_sponsorSwitch = new QPushButton(historyBox);
        pushButton_sponsorSwitch->setObjectName(QStringLiteral("pushButton_sponsorSwitch"));

        verticalLayout_5->addWidget(pushButton_sponsorSwitch);


        point_Layout->addWidget(historyBox);

        point_Layout->setStretch(0, 1);
        point_Layout->setStretch(1, 4);

        horizontalLayout_3->addLayout(point_Layout);

        stackedWidget_driver = new QStackedWidget(driver_home);
        stackedWidget_driver->setObjectName(QStringLiteral("stackedWidget_driver"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_9 = new QHBoxLayout(page_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        driver_catalog = new QTableWidget(page_2);
        driver_catalog->setObjectName(QStringLiteral("driver_catalog"));

        horizontalLayout_9->addWidget(driver_catalog);

        stackedWidget_driver->addWidget(page_2);
        driver_account = new QWidget();
        driver_account->setObjectName(QStringLiteral("driver_account"));
        gridLayout = new QGridLayout(driver_account);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(driver_account);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 720, 764));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Agan\303\250 S"));
        font6.setPointSize(16);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setUnderline(true);
        font6.setWeight(50);
        label_2->setFont(font6);

        verticalLayout_9->addWidget(label_2);

        lineEdit_driver_name = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_name->setObjectName(QStringLiteral("lineEdit_driver_name"));
        lineEdit_driver_name->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_name);

        pushButton_driver__Name_Change = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver__Name_Change->setObjectName(QStringLiteral("pushButton_driver__Name_Change"));
        pushButton_driver__Name_Change->setFont(font5);

        verticalLayout_9->addWidget(pushButton_driver__Name_Change);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font6);

        verticalLayout_9->addWidget(label_4);

        lineEdit_driver_email = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_email->setObjectName(QStringLiteral("lineEdit_driver_email"));
        lineEdit_driver_email->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_email);

        pushButton_driver_Email_Change = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver_Email_Change->setObjectName(QStringLiteral("pushButton_driver_Email_Change"));
        pushButton_driver_Email_Change->setFont(font5);

        verticalLayout_9->addWidget(pushButton_driver_Email_Change);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font6);

        verticalLayout_9->addWidget(label_7);

        driver_sponsor_label = new QLabel(scrollAreaWidgetContents);
        driver_sponsor_label->setObjectName(QStringLiteral("driver_sponsor_label"));
        driver_sponsor_label->setFont(font);

        verticalLayout_9->addWidget(driver_sponsor_label);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font6);

        verticalLayout_9->addWidget(label_5);

        lineEdit_driver_LP = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_LP->setObjectName(QStringLiteral("lineEdit_driver_LP"));
        lineEdit_driver_LP->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_LP);

        pushButton_driver_LP_Add = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver_LP_Add->setObjectName(QStringLiteral("pushButton_driver_LP_Add"));
        pushButton_driver_LP_Add->setFont(font5);

        verticalLayout_9->addWidget(pushButton_driver_LP_Add);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font6);

        verticalLayout_9->addWidget(label_6);

        lineEdit_driver_ln = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_ln->setObjectName(QStringLiteral("lineEdit_driver_ln"));
        lineEdit_driver_ln->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_ln);

        pushButton_driver_ln_Change = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver_ln_Change->setObjectName(QStringLiteral("pushButton_driver_ln_Change"));

        verticalLayout_9->addWidget(pushButton_driver_ln_Change);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font6);

        verticalLayout_9->addWidget(label_9);

        lineEdit_driver_phone = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_phone->setObjectName(QStringLiteral("lineEdit_driver_phone"));
        lineEdit_driver_phone->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_phone);

        pushButton_driver_phone_Change = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver_phone_Change->setObjectName(QStringLiteral("pushButton_driver_phone_Change"));
        pushButton_driver_phone_Change->setFont(font5);

        verticalLayout_9->addWidget(pushButton_driver_phone_Change);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font6);

        verticalLayout_9->addWidget(label_10);

        lineEdit_driver_address = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_driver_address->setObjectName(QStringLiteral("lineEdit_driver_address"));
        lineEdit_driver_address->setFont(font1);

        verticalLayout_9->addWidget(lineEdit_driver_address);

        pushButton_driver_address_Add = new QPushButton(scrollAreaWidgetContents);
        pushButton_driver_address_Add->setObjectName(QStringLiteral("pushButton_driver_address_Add"));
        pushButton_driver_address_Add->setFont(font5);

        verticalLayout_9->addWidget(pushButton_driver_address_Add);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        stackedWidget_driver->addWidget(driver_account);

        horizontalLayout_3->addWidget(stackedWidget_driver);

        stackedWidget->addWidget(driver_home);
        sponsor_home = new QWidget();
        sponsor_home->setObjectName(QStringLiteral("sponsor_home"));
        horizontalLayout_4 = new QHBoxLayout(sponsor_home);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sponsor_Home_Button = new QPushButton(sponsor_home);
        sponsor_Home_Button->setObjectName(QStringLiteral("sponsor_Home_Button"));
        sponsor_Home_Button->setFont(font5);

        verticalLayout->addWidget(sponsor_Home_Button);

        sponsor_Products = new QPushButton(sponsor_home);
        sponsor_Products->setObjectName(QStringLiteral("sponsor_Products"));
        sponsor_Products->setFont(font5);

        verticalLayout->addWidget(sponsor_Products);

        sponsor_Account = new QPushButton(sponsor_home);
        sponsor_Account->setObjectName(QStringLiteral("sponsor_Account"));
        sponsor_Account->setFont(font5);

        verticalLayout->addWidget(sponsor_Account);

        sponsor_Logout = new QPushButton(sponsor_home);
        sponsor_Logout->setObjectName(QStringLiteral("sponsor_Logout"));
        sponsor_Logout->setFont(font5);

        verticalLayout->addWidget(sponsor_Logout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_2 = new QGroupBox(sponsor_home);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(sponsor_home);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));

        verticalLayout_7->addWidget(groupBox_3);

        pushButton = new QPushButton(sponsor_home);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_7->addWidget(pushButton);

        pushButton_5 = new QPushButton(sponsor_home);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy7);
        pushButton_5->setFont(font5);

        verticalLayout_7->addWidget(pushButton_5);


        verticalLayout->addLayout(verticalLayout_7);


        horizontalLayout_4->addLayout(verticalLayout);

        stackedWidget_sponsor = new QStackedWidget(sponsor_home);
        stackedWidget_sponsor->setObjectName(QStringLiteral("stackedWidget_sponsor"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        driver_table = new QTableWidget(page);
        if (driver_table->columnCount() < 1)
            driver_table->setColumnCount(1);
        if (driver_table->rowCount() < 1)
            driver_table->setRowCount(1);
        driver_table->setObjectName(QStringLiteral("driver_table"));
        driver_table->setRowCount(1);
        driver_table->setColumnCount(1);

        verticalLayout_6->addWidget(driver_table);

        stackedWidget_sponsor->addWidget(page);
        sponsor_home_2 = new QWidget();
        sponsor_home_2->setObjectName(QStringLiteral("sponsor_home_2"));
        verticalLayout_8 = new QVBoxLayout(sponsor_home_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_16 = new QLabel(sponsor_home_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font6);

        verticalLayout_8->addWidget(label_16);

        lineEdit_sponsor_name = new QLineEdit(sponsor_home_2);
        lineEdit_sponsor_name->setObjectName(QStringLiteral("lineEdit_sponsor_name"));

        verticalLayout_8->addWidget(lineEdit_sponsor_name);

        pushButton_sponsor_Name_Change = new QPushButton(sponsor_home_2);
        pushButton_sponsor_Name_Change->setObjectName(QStringLiteral("pushButton_sponsor_Name_Change"));
        pushButton_sponsor_Name_Change->setFont(font5);

        verticalLayout_8->addWidget(pushButton_sponsor_Name_Change);

        label_17 = new QLabel(sponsor_home_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font6);

        verticalLayout_8->addWidget(label_17);

        lineEdit_sponsor_email = new QLineEdit(sponsor_home_2);
        lineEdit_sponsor_email->setObjectName(QStringLiteral("lineEdit_sponsor_email"));
        lineEdit_sponsor_email->setFont(font1);

        verticalLayout_8->addWidget(lineEdit_sponsor_email);

        pushButton_sponsor_email_Change = new QPushButton(sponsor_home_2);
        pushButton_sponsor_email_Change->setObjectName(QStringLiteral("pushButton_sponsor_email_Change"));
        pushButton_sponsor_email_Change->setFont(font5);

        verticalLayout_8->addWidget(pushButton_sponsor_email_Change);

        label_18 = new QLabel(sponsor_home_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font6);

        verticalLayout_8->addWidget(label_18);

        lineEdit_sponsor_phone = new QLineEdit(sponsor_home_2);
        lineEdit_sponsor_phone->setObjectName(QStringLiteral("lineEdit_sponsor_phone"));
        lineEdit_sponsor_phone->setFont(font1);

        verticalLayout_8->addWidget(lineEdit_sponsor_phone);

        pushButton_sponsor_phone_Change = new QPushButton(sponsor_home_2);
        pushButton_sponsor_phone_Change->setObjectName(QStringLiteral("pushButton_sponsor_phone_Change"));
        pushButton_sponsor_phone_Change->setFont(font5);

        verticalLayout_8->addWidget(pushButton_sponsor_phone_Change);

        label_14 = new QLabel(sponsor_home_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font6);

        verticalLayout_8->addWidget(label_14);

        lineEdit_sponsor_address = new QLineEdit(sponsor_home_2);
        lineEdit_sponsor_address->setObjectName(QStringLiteral("lineEdit_sponsor_address"));
        lineEdit_sponsor_address->setFont(font1);

        verticalLayout_8->addWidget(lineEdit_sponsor_address);

        pushButton_sponsor_address_Add = new QPushButton(sponsor_home_2);
        pushButton_sponsor_address_Add->setObjectName(QStringLiteral("pushButton_sponsor_address_Add"));
        pushButton_sponsor_address_Add->setFont(font5);

        verticalLayout_8->addWidget(pushButton_sponsor_address_Add);

        stackedWidget_sponsor->addWidget(sponsor_home_2);

        horizontalLayout_4->addWidget(stackedWidget_sponsor);

        stackedWidget->addWidget(sponsor_home);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_8 = new QHBoxLayout(page_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_14 = new QVBoxLayout(tab);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        all_search = new QLineEdit(tab);
        all_search->setObjectName(QStringLiteral("all_search"));

        horizontalLayout_5->addWidget(all_search);

        admin_search_button = new QPushButton(tab);
        admin_search_button->setObjectName(QStringLiteral("admin_search_button"));
        admin_search_button->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout_5->addWidget(admin_search_button);


        verticalLayout_14->addLayout(horizontalLayout_5);

        admin_all_table = new QTableWidget(tab);
        admin_all_table->setObjectName(QStringLiteral("admin_all_table"));

        verticalLayout_14->addWidget(admin_all_table);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_13 = new QVBoxLayout(tab_3);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        driver_search = new QLineEdit(tab_3);
        driver_search->setObjectName(QStringLiteral("driver_search"));

        horizontalLayout->addWidget(driver_search);

        driver_search_button = new QPushButton(tab_3);
        driver_search_button->setObjectName(QStringLiteral("driver_search_button"));
        driver_search_button->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout->addWidget(driver_search_button);


        verticalLayout_13->addLayout(horizontalLayout);

        admin_drivers_table = new QTableWidget(tab_3);
        admin_drivers_table->setObjectName(QStringLiteral("admin_drivers_table"));

        verticalLayout_13->addWidget(admin_drivers_table);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_12 = new QVBoxLayout(tab_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        sponsor_search = new QLineEdit(tab_2);
        sponsor_search->setObjectName(QStringLiteral("sponsor_search"));

        horizontalLayout_6->addWidget(sponsor_search);

        sponsor_search_button = new QPushButton(tab_2);
        sponsor_search_button->setObjectName(QStringLiteral("sponsor_search_button"));
        sponsor_search_button->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout_6->addWidget(sponsor_search_button);


        verticalLayout_12->addLayout(horizontalLayout_6);

        admin_sponsors_table = new QTableWidget(tab_2);
        admin_sponsors_table->setObjectName(QStringLiteral("admin_sponsors_table"));

        verticalLayout_12->addWidget(admin_sponsors_table);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_16 = new QVBoxLayout(tab_5);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        admin_search = new QLineEdit(tab_5);
        admin_search->setObjectName(QStringLiteral("admin_search"));

        horizontalLayout_10->addWidget(admin_search);

        admin_search_button_2 = new QPushButton(tab_5);
        admin_search_button_2->setObjectName(QStringLiteral("admin_search_button_2"));
        admin_search_button_2->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout_10->addWidget(admin_search_button_2);


        verticalLayout_16->addLayout(horizontalLayout_10);

        admin_admin_table = new QTableWidget(tab_5);
        admin_admin_table->setObjectName(QStringLiteral("admin_admin_table"));

        verticalLayout_16->addWidget(admin_admin_table);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_11 = new QVBoxLayout(tab_4);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        products_search = new QLineEdit(tab_4);
        products_search->setObjectName(QStringLiteral("products_search"));

        horizontalLayout_7->addWidget(products_search);

        products_search_button = new QPushButton(tab_4);
        products_search_button->setObjectName(QStringLiteral("products_search_button"));
        products_search_button->setStyleSheet(QStringLiteral("font-size : 30px"));

        horizontalLayout_7->addWidget(products_search_button);


        verticalLayout_11->addLayout(horizontalLayout_7);

        tableWidget_8 = new QTableWidget(tab_4);
        tableWidget_8->setObjectName(QStringLiteral("tableWidget_8"));

        verticalLayout_11->addWidget(tableWidget_8);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_8->addWidget(tabWidget);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_driver->setCurrentIndex(0);
        stackedWidget_sponsor->setCurrentIndex(1);
        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DrivePoints or something idk", 0));
        groupBox->setTitle(QString());
        label_Username_2->setText(QApplication::translate("MainWindow", "Username", 0));
        label_Password_2->setText(QApplication::translate("MainWindow", "Password", 0));
        pushButton_Login_2->setText(QApplication::translate("MainWindow", "Login", 0));
        logo->setText(QApplication::translate("MainWindow", "DrivePoints\342\204\242", 0));
        pointBox->setTitle(QString());
        pointbox_2->setTitle(QString());
        pointsValue_label->setText(QApplication::translate("MainWindow", "0", 0));
        label_Points_Total->setText(QApplication::translate("MainWindow", "Points", 0));
        pointsDollar_label->setText(QApplication::translate("MainWindow", "($0)", 0));
        driver_Home_Button->setText(QApplication::translate("MainWindow", "Home", 0));
        driver_Account->setText(QApplication::translate("MainWindow", "My Account", 0));
        driver_Logout->setText(QApplication::translate("MainWindow", "Logout", 0));
        historyBox->setTitle(QString());
        groupBox_4->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Current Sponsor", 0));
        driver_currSponsor->setText(QApplication::translate("MainWindow", "KFC", 0));
        pushButton_sponsorSwitch->setText(QApplication::translate("MainWindow", "Switch Sponsor", 0));
        label_2->setText(QApplication::translate("MainWindow", "Name", 0));
        lineEdit_driver_name->setText(QApplication::translate("MainWindow", "Colonel Sanders", 0));
        pushButton_driver__Name_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_4->setText(QApplication::translate("MainWindow", "Email", 0));
        lineEdit_driver_email->setText(QApplication::translate("MainWindow", "place@hold.er", 0));
        pushButton_driver_Email_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_7->setText(QApplication::translate("MainWindow", "Sponsor", 0));
        driver_sponsor_label->setText(QApplication::translate("MainWindow", "KFC Drivers Inc. LLC Co. & Sons", 0));
        label_5->setText(QApplication::translate("MainWindow", "License Plate Number", 0));
        pushButton_driver_LP_Add->setText(QApplication::translate("MainWindow", "Add", 0));
        label_6->setText(QApplication::translate("MainWindow", "License Number", 0));
        lineEdit_driver_ln->setText(QApplication::translate("MainWindow", "1234567890", 0));
        pushButton_driver_ln_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_9->setText(QApplication::translate("MainWindow", "Phone Number", 0));
        lineEdit_driver_phone->setText(QApplication::translate("MainWindow", "1-800-867-5309", 0));
        pushButton_driver_phone_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_10->setText(QApplication::translate("MainWindow", "Address", 0));
        pushButton_driver_address_Add->setText(QApplication::translate("MainWindow", "Add", 0));
        sponsor_Home_Button->setText(QApplication::translate("MainWindow", "Home", 0));
        sponsor_Products->setText(QApplication::translate("MainWindow", "Products", 0));
        sponsor_Account->setText(QApplication::translate("MainWindow", "Account", 0));
        sponsor_Logout->setText(QApplication::translate("MainWindow", "Logout", 0));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        pushButton->setText(QApplication::translate("MainWindow", "New Driver", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "All Requests", 0));
        label_16->setText(QApplication::translate("MainWindow", "Sponsor Name", 0));
        pushButton_sponsor_Name_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_17->setText(QApplication::translate("MainWindow", "Email", 0));
        lineEdit_sponsor_email->setText(QApplication::translate("MainWindow", "fingerlickingood@kfc.weebly.com", 0));
        pushButton_sponsor_email_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_18->setText(QApplication::translate("MainWindow", "Phone Number", 0));
        lineEdit_sponsor_phone->setText(QApplication::translate("MainWindow", "1-800-867-5309", 0));
        pushButton_sponsor_phone_Change->setText(QApplication::translate("MainWindow", "Change", 0));
        label_14->setText(QApplication::translate("MainWindow", "Address", 0));
        pushButton_sponsor_address_Add->setText(QApplication::translate("MainWindow", "Add", 0));
        admin_search_button->setText(QApplication::translate("MainWindow", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "All Users", 0));
        driver_search_button->setText(QApplication::translate("MainWindow", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Drivers", 0));
        sponsor_search_button->setText(QApplication::translate("MainWindow", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Sponsors", 0));
        admin_search_button_2->setText(QApplication::translate("MainWindow", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Admins", 0));
        products_search_button->setText(QApplication::translate("MainWindow", "Search", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Products", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
