/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *MenuGra;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonlogout;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLabel *labelMenuGraUserName;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QLabel *labelMenuGraCredits;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonGra1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonGra2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonGra3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *Start;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_3;
    QLabel *labelUserName;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_5;
    QLabel *labelCredits;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    QTextEdit *textLogin;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_2;
    QTextEdit *textPassword;
    QPushButton *pushButtonLogIn;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonRegister;
    QSpacerItem *horizontalSpacer_8;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(778, 396);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMaximumSize(QSize(600, 400));
        MenuGra = new QWidget();
        MenuGra->setObjectName("MenuGra");
        horizontalLayout_2 = new QHBoxLayout(MenuGra);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        horizontalLayout->addLayout(verticalLayout_2);

        pushButtonlogout = new QPushButton(MenuGra);
        pushButtonlogout->setObjectName("pushButtonlogout");

        horizontalLayout->addWidget(pushButtonlogout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(MenuGra);
        label_6->setObjectName("label_6");

        horizontalLayout_9->addWidget(label_6);

        labelMenuGraUserName = new QLabel(MenuGra);
        labelMenuGraUserName->setObjectName("labelMenuGraUserName");

        horizontalLayout_9->addWidget(labelMenuGraUserName);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_7 = new QLabel(MenuGra);
        label_7->setObjectName("label_7");

        horizontalLayout_14->addWidget(label_7);

        labelMenuGraCredits = new QLabel(MenuGra);
        labelMenuGraCredits->setObjectName("labelMenuGraCredits");

        horizontalLayout_14->addWidget(labelMenuGraCredits);


        verticalLayout_3->addLayout(horizontalLayout_14);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButtonGra1 = new QPushButton(MenuGra);
        pushButtonGra1->setObjectName("pushButtonGra1");
        pushButtonGra1->setMinimumSize(QSize(50, 100));

        horizontalLayout_7->addWidget(pushButtonGra1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonGra2 = new QPushButton(MenuGra);
        pushButtonGra2->setObjectName("pushButtonGra2");
        pushButtonGra2->setMinimumSize(QSize(50, 100));

        horizontalLayout_7->addWidget(pushButtonGra2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButtonGra3 = new QPushButton(MenuGra);
        pushButtonGra3->setObjectName("pushButtonGra3");
        pushButtonGra3->setMinimumSize(QSize(50, 100));

        horizontalLayout_6->addWidget(pushButtonGra3);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget->addWidget(MenuGra);
        Start = new QWidget();
        Start->setObjectName("Start");
        gridLayout_2 = new QGridLayout(Start);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");

        horizontalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");

        horizontalLayout_11->addLayout(horizontalLayout_13);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_3 = new QLabel(Start);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(100, 30));

        horizontalLayout_17->addWidget(label_3);

        labelUserName = new QLabel(Start);
        labelUserName->setObjectName("labelUserName");
        labelUserName->setMaximumSize(QSize(100, 30));

        horizontalLayout_17->addWidget(labelUserName);


        verticalLayout_13->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_5 = new QLabel(Start);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(100, 30));

        horizontalLayout_16->addWidget(label_5);

        labelCredits = new QLabel(Start);
        labelCredits->setObjectName("labelCredits");
        labelCredits->setMaximumSize(QSize(100, 30));

        horizontalLayout_16->addWidget(labelCredits);


        verticalLayout_13->addLayout(horizontalLayout_16);


        horizontalLayout_10->addLayout(verticalLayout_13);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label = new QLabel(Start);
        label->setObjectName("label");
        label->setMaximumSize(QSize(100, 30));

        verticalLayout_12->addWidget(label);

        textLogin = new QTextEdit(Start);
        textLogin->setObjectName("textLogin");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLogin->sizePolicy().hasHeightForWidth());
        textLogin->setSizePolicy(sizePolicy);
        textLogin->setMaximumSize(QSize(100, 30));

        verticalLayout_12->addWidget(textLogin);


        verticalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_2 = new QLabel(Start);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(100, 10));

        verticalLayout_11->addWidget(label_2);

        textPassword = new QTextEdit(Start);
        textPassword->setObjectName("textPassword");
        sizePolicy.setHeightForWidth(textPassword->sizePolicy().hasHeightForWidth());
        textPassword->setSizePolicy(sizePolicy);
        textPassword->setMaximumSize(QSize(100, 30));

        verticalLayout_11->addWidget(textPassword);

        pushButtonLogIn = new QPushButton(Start);
        pushButtonLogIn->setObjectName("pushButtonLogIn");
        sizePolicy.setHeightForWidth(pushButtonLogIn->sizePolicy().hasHeightForWidth());
        pushButtonLogIn->setSizePolicy(sizePolicy);
        pushButtonLogIn->setMaximumSize(QSize(100, 30));

        verticalLayout_11->addWidget(pushButtonLogIn);


        verticalLayout_6->addLayout(verticalLayout_11);


        horizontalLayout_8->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");

        horizontalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        pushButtonRegister = new QPushButton(Start);
        pushButtonRegister->setObjectName("pushButtonRegister");

        horizontalLayout_5->addWidget(pushButtonRegister);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        stackedWidget->addWidget(Start);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonlogout->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        labelMenuGraUserName->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        labelMenuGraCredits->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButtonGra1->setText(QCoreApplication::translate("MainWindow", "Gra1", nullptr));
        pushButtonGra2->setText(QCoreApplication::translate("MainWindow", "Gra2", nullptr));
        pushButtonGra3->setText(QCoreApplication::translate("MainWindow", "Gra3", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Witaj", nullptr));
        labelUserName->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Credits:", nullptr));
        labelCredits->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Haslo", nullptr));
        pushButtonLogIn->setText(QCoreApplication::translate("MainWindow", "Log In!", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
