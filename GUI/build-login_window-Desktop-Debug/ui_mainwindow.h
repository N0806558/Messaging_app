/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *shutdownButton;
    QPushButton *restartButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("#loginForm { \n"
"border: 1px solid;\n"
"} \n"
"\n"
"#centralwidget { \n"
"	background: rgba(10, 60, 90, 70); \n"
"}\n"
"\n"
"#topPanel{\n"
"	background: rgb(20,20,100);\n"
"}\n"
"\n"
"#loginForm{\n"
"	background: rgba(0,0,0,80);\n"
"	border-radius: 8px;\n"
"\n"
"}\n"
"\n"
"QLabel{ color: white; }\n"
"QLineEdit { border-radius: 3px; }\n"
"QPushButton:hover { \n"
"	background: rgba(10, 60, 90, 70); \n"
"	color: white;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QString::fromUtf8("topPanel"));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        currentDateTime = new QLabel(topPanel);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        shutdownButton = new QPushButton(topPanel);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shutdownButton->sizePolicy().hasHeightForWidth());
        shutdownButton->setSizePolicy(sizePolicy);
        shutdownButton->setMinimumSize(QSize(55, 55));

        horizontalLayout->addWidget(shutdownButton);

        restartButton = new QPushButton(topPanel);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setMinimumSize(QSize(55, 55));

        horizontalLayout->addWidget(restartButton);


        verticalLayout->addWidget(topPanel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(150, 150));
        logo->setStyleSheet(QString::fromUtf8("border: 1px solid;"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(centralwidget);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 200));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(loginForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setBaseSize(QSize(0, 0));

        horizontalLayout_5->addWidget(label);

        username = new QLineEdit(loginForm);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_5->addWidget(username);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        password = new QLineEdit(loginForm);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_4->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(loginButton);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        currentDateTime->setText(QApplication::translate("MainWindow", "Sunday, 28-02-2021", nullptr));
        shutdownButton->setText(QString());
        restartButton->setText(QString());
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Username: ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password:  ", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
