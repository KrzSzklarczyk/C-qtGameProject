/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
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
    QWidget *Gra1SlotMachine;
    QPushButton *BackToMainMenu;
    QPushButton *spinButton;
    QLabel *slotMachineDrum1;
    QLabel *slotMachineDrum2;
    QLabel *slotMachineDrum3;
    QTextEdit *betSlotMachine;
    QLabel *label_4;
    QLabel *Label_Gra1Credits;
    QLabel *label_8;
    QWidget *Gra2;
    QPushButton *BackToMainMenu_2;
    QLabel *label_Millionaire_Pytanie;
    QPushButton *pushButton_Millionaire_ODP_A;
    QPushButton *pushButton_Millionaire_ODP_B;
    QPushButton *pushButton_Millionaire_ODP_C;
    QPushButton *pushButton_Millionaire_ODP_D;
    QLabel *label_Gra2Credits;
    QLabel *label_9;
    QPushButton *pushButton_Chance2of4;
    QPushButton *pushButton_Chance_AnotherQ;
    QLabel *label_10;
    QTextEdit *textEdit_MillionaireBET;
    QPushButton *pushButton_Miliiionaire_Start;
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(778, 396);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(600, 400));
        MenuGra = new QWidget();
        MenuGra->setObjectName(QString::fromUtf8("MenuGra"));
        horizontalLayout_2 = new QHBoxLayout(MenuGra);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);

        pushButtonlogout = new QPushButton(MenuGra);
        pushButtonlogout->setObjectName(QString::fromUtf8("pushButtonlogout"));

        horizontalLayout->addWidget(pushButtonlogout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(MenuGra);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        labelMenuGraUserName = new QLabel(MenuGra);
        labelMenuGraUserName->setObjectName(QString::fromUtf8("labelMenuGraUserName"));

        horizontalLayout_9->addWidget(labelMenuGraUserName);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_7 = new QLabel(MenuGra);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_14->addWidget(label_7);

        labelMenuGraCredits = new QLabel(MenuGra);
        labelMenuGraCredits->setObjectName(QString::fromUtf8("labelMenuGraCredits"));

        horizontalLayout_14->addWidget(labelMenuGraCredits);


        verticalLayout_3->addLayout(horizontalLayout_14);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButtonGra1 = new QPushButton(MenuGra);
        pushButtonGra1->setObjectName(QString::fromUtf8("pushButtonGra1"));
        pushButtonGra1->setMinimumSize(QSize(50, 100));

        horizontalLayout_7->addWidget(pushButtonGra1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonGra2 = new QPushButton(MenuGra);
        pushButtonGra2->setObjectName(QString::fromUtf8("pushButtonGra2"));
        pushButtonGra2->setMinimumSize(QSize(50, 100));

        horizontalLayout_7->addWidget(pushButtonGra2);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget->addWidget(MenuGra);
        Gra1SlotMachine = new QWidget();
        Gra1SlotMachine->setObjectName(QString::fromUtf8("Gra1SlotMachine"));
        BackToMainMenu = new QPushButton(Gra1SlotMachine);
        BackToMainMenu->setObjectName(QString::fromUtf8("BackToMainMenu"));
        BackToMainMenu->setGeometry(QRect(10, 10, 80, 24));
        spinButton = new QPushButton(Gra1SlotMachine);
        spinButton->setObjectName(QString::fromUtf8("spinButton"));
        spinButton->setGeometry(QRect(230, 280, 111, 71));
        slotMachineDrum1 = new QLabel(Gra1SlotMachine);
        slotMachineDrum1->setObjectName(QString::fromUtf8("slotMachineDrum1"));
        slotMachineDrum1->setGeometry(QRect(0, 60, 200, 197));
        slotMachineDrum2 = new QLabel(Gra1SlotMachine);
        slotMachineDrum2->setObjectName(QString::fromUtf8("slotMachineDrum2"));
        slotMachineDrum2->setGeometry(QRect(200, 60, 200, 197));
        slotMachineDrum3 = new QLabel(Gra1SlotMachine);
        slotMachineDrum3->setObjectName(QString::fromUtf8("slotMachineDrum3"));
        slotMachineDrum3->setGeometry(QRect(400, 60, 200, 197));
        betSlotMachine = new QTextEdit(Gra1SlotMachine);
        betSlotMachine->setObjectName(QString::fromUtf8("betSlotMachine"));
        betSlotMachine->setGeometry(QRect(90, 300, 101, 31));
        label_4 = new QLabel(Gra1SlotMachine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 300, 31, 31));
        Label_Gra1Credits = new QLabel(Gra1SlotMachine);
        Label_Gra1Credits->setObjectName(QString::fromUtf8("Label_Gra1Credits"));
        Label_Gra1Credits->setGeometry(QRect(460, 10, 91, 21));
        label_8 = new QLabel(Gra1SlotMachine);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 10, 41, 21));
        stackedWidget->addWidget(Gra1SlotMachine);
        Gra2 = new QWidget();
        Gra2->setObjectName(QString::fromUtf8("Gra2"));
        BackToMainMenu_2 = new QPushButton(Gra2);
        BackToMainMenu_2->setObjectName(QString::fromUtf8("BackToMainMenu_2"));
        BackToMainMenu_2->setGeometry(QRect(0, 0, 80, 24));
        label_Millionaire_Pytanie = new QLabel(Gra2);
        label_Millionaire_Pytanie->setObjectName(QString::fromUtf8("label_Millionaire_Pytanie"));
        label_Millionaire_Pytanie->setGeometry(QRect(10, 60, 481, 61));
        pushButton_Millionaire_ODP_A = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_A->setObjectName(QString::fromUtf8("pushButton_Millionaire_ODP_A"));
        pushButton_Millionaire_ODP_A->setGeometry(QRect(10, 130, 491, 48));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Millionaire_ODP_A->sizePolicy().hasHeightForWidth());
        pushButton_Millionaire_ODP_A->setSizePolicy(sizePolicy);
        pushButton_Millionaire_ODP_B = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_B->setObjectName(QString::fromUtf8("pushButton_Millionaire_ODP_B"));
        pushButton_Millionaire_ODP_B->setGeometry(QRect(10, 180, 491, 51));
        sizePolicy.setHeightForWidth(pushButton_Millionaire_ODP_B->sizePolicy().hasHeightForWidth());
        pushButton_Millionaire_ODP_B->setSizePolicy(sizePolicy);
        pushButton_Millionaire_ODP_C = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_C->setObjectName(QString::fromUtf8("pushButton_Millionaire_ODP_C"));
        pushButton_Millionaire_ODP_C->setGeometry(QRect(10, 240, 489, 51));
        sizePolicy.setHeightForWidth(pushButton_Millionaire_ODP_C->sizePolicy().hasHeightForWidth());
        pushButton_Millionaire_ODP_C->setSizePolicy(sizePolicy);
        pushButton_Millionaire_ODP_D = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_D->setObjectName(QString::fromUtf8("pushButton_Millionaire_ODP_D"));
        pushButton_Millionaire_ODP_D->setGeometry(QRect(10, 300, 491, 51));
        sizePolicy.setHeightForWidth(pushButton_Millionaire_ODP_D->sizePolicy().hasHeightForWidth());
        pushButton_Millionaire_ODP_D->setSizePolicy(sizePolicy);
        label_Gra2Credits = new QLabel(Gra2);
        label_Gra2Credits->setObjectName(QString::fromUtf8("label_Gra2Credits"));
        label_Gra2Credits->setGeometry(QRect(510, 10, 81, 31));
        label_9 = new QLabel(Gra2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(460, 10, 51, 31));
        pushButton_Chance2of4 = new QPushButton(Gra2);
        pushButton_Chance2of4->setObjectName(QString::fromUtf8("pushButton_Chance2of4"));
        pushButton_Chance2of4->setGeometry(QRect(510, 120, 81, 81));
        pushButton_Chance_AnotherQ = new QPushButton(Gra2);
        pushButton_Chance_AnotherQ->setObjectName(QString::fromUtf8("pushButton_Chance_AnotherQ"));
        pushButton_Chance_AnotherQ->setGeometry(QRect(510, 230, 81, 101));
        label_10 = new QLabel(Gra2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(240, 10, 31, 31));
        textEdit_MillionaireBET = new QTextEdit(Gra2);
        textEdit_MillionaireBET->setObjectName(QString::fromUtf8("textEdit_MillionaireBET"));
        textEdit_MillionaireBET->setGeometry(QRect(270, 10, 131, 31));
        pushButton_Miliiionaire_Start = new QPushButton(Gra2);
        pushButton_Miliiionaire_Start->setObjectName(QString::fromUtf8("pushButton_Miliiionaire_Start"));
        pushButton_Miliiionaire_Start->setGeometry(QRect(500, 40, 81, 61));
        pushButton_Miliiionaire_Start->setCheckable(false);
        stackedWidget->addWidget(Gra2);
        Start = new QWidget();
        Start->setObjectName(QString::fromUtf8("Start"));
        gridLayout_2 = new QGridLayout(Start);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));

        horizontalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));

        horizontalLayout_11->addLayout(horizontalLayout_13);


        horizontalLayout_10->addLayout(horizontalLayout_11);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_3 = new QLabel(Start);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 30));

        horizontalLayout_17->addWidget(label_3);

        labelUserName = new QLabel(Start);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        labelUserName->setMaximumSize(QSize(100, 30));

        horizontalLayout_17->addWidget(labelUserName);


        verticalLayout_13->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_5 = new QLabel(Start);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(100, 30));

        horizontalLayout_16->addWidget(label_5);

        labelCredits = new QLabel(Start);
        labelCredits->setObjectName(QString::fromUtf8("labelCredits"));
        labelCredits->setMaximumSize(QSize(100, 30));

        horizontalLayout_16->addWidget(labelCredits);


        verticalLayout_13->addLayout(horizontalLayout_16);


        horizontalLayout_10->addLayout(verticalLayout_13);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label = new QLabel(Start);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 30));

        verticalLayout_12->addWidget(label);

        textLogin = new QTextEdit(Start);
        textLogin->setObjectName(QString::fromUtf8("textLogin"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLogin->sizePolicy().hasHeightForWidth());
        textLogin->setSizePolicy(sizePolicy1);
        textLogin->setMaximumSize(QSize(100, 30));

        verticalLayout_12->addWidget(textLogin);


        verticalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_2 = new QLabel(Start);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(100, 10));

        verticalLayout_11->addWidget(label_2);

        textPassword = new QTextEdit(Start);
        textPassword->setObjectName(QString::fromUtf8("textPassword"));
        sizePolicy1.setHeightForWidth(textPassword->sizePolicy().hasHeightForWidth());
        textPassword->setSizePolicy(sizePolicy1);
        textPassword->setMaximumSize(QSize(100, 30));

        verticalLayout_11->addWidget(textPassword);

        pushButtonLogIn = new QPushButton(Start);
        pushButtonLogIn->setObjectName(QString::fromUtf8("pushButtonLogIn"));
        sizePolicy1.setHeightForWidth(pushButtonLogIn->sizePolicy().hasHeightForWidth());
        pushButtonLogIn->setSizePolicy(sizePolicy1);
        pushButtonLogIn->setMaximumSize(QSize(100, 30));

        verticalLayout_11->addWidget(pushButtonLogIn);


        verticalLayout_6->addLayout(verticalLayout_11);


        horizontalLayout_8->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        horizontalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        pushButtonRegister = new QPushButton(Start);
        pushButtonRegister->setObjectName(QString::fromUtf8("pushButtonRegister"));

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
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


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
        BackToMainMenu->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        spinButton->setText(QCoreApplication::translate("MainWindow", "SPIN", nullptr));
        slotMachineDrum1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        slotMachineDrum2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        slotMachineDrum3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "BET", nullptr));
        Label_Gra1Credits->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Credits:", nullptr));
        BackToMainMenu_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_Millionaire_Pytanie->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_Millionaire_ODP_A->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_Millionaire_ODP_B->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_Millionaire_ODP_C->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_Millionaire_ODP_D->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_Gra2Credits->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Credits:", nullptr));
        pushButton_Chance2of4->setText(QCoreApplication::translate("MainWindow", "50/50", nullptr));
        pushButton_Chance_AnotherQ->setText(QCoreApplication::translate("MainWindow", "Another One", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "BET:", nullptr));
        pushButton_Miliiionaire_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
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
