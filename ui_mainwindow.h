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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonlogout;
    QPushButton *pushButton_exit;
    QStackedWidget *stackedWidget;
    QWidget *MenuGra;
    QPushButton *pushButtonGra2;
    QPushButton *pushButtonGra1;
    QWidget *Gra1SlotMachine;
    QPushButton *spinButton;
    QLabel *slotMachineDrum1;
    QLabel *slotMachineDrum2;
    QLabel *slotMachineDrum3;
    QTextEdit *betSlotMachine;
    QPushButton *BackToMainMenu;
    QWidget *Gra2;
    QPushButton *BackToMainMenu_2;
    QLabel *label_Millionaire_Pytanie;
    QPushButton *pushButton_Millionaire_ODP_A;
    QPushButton *pushButton_Millionaire_ODP_B;
    QPushButton *pushButton_Millionaire_ODP_C;
    QPushButton *pushButton_Millionaire_ODP_D;
    QTextEdit *textEdit_MillionaireBET;
    QPushButton *on_pushButton_Milionaire_Start_clicked;
    QWidget *Start;
    QTextEdit *textLogin;
    QTextEdit *textPassword;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonLogIn;
    QLabel *labelMenuGraUserName;
    QLabel *labelMenuGraCredits;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButtonlogout = new QPushButton(centralwidget);
        pushButtonlogout->setObjectName("pushButtonlogout");
        pushButtonlogout->setStyleSheet(QString::fromUtf8("color: white"));

        gridLayout->addWidget(pushButtonlogout, 0, 1, 1, 1);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setMinimumSize(QSize(80, 0));
        pushButton_exit->setMaximumSize(QSize(50, 16777215));
        pushButton_exit->setStyleSheet(QString::fromUtf8("color: white"));

        gridLayout->addWidget(pushButton_exit, 4, 1, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        MenuGra = new QWidget();
        MenuGra->setObjectName("MenuGra");
        pushButtonGra2 = new QPushButton(MenuGra);
        pushButtonGra2->setObjectName("pushButtonGra2");
        pushButtonGra2->setGeometry(QRect(300, 100, 191, 151));
        pushButtonGra2->setMinimumSize(QSize(50, 100));
        pushButtonGra2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(45, 53, 129)"));
        pushButtonGra1 = new QPushButton(MenuGra);
        pushButtonGra1->setObjectName("pushButtonGra1");
        pushButtonGra1->setGeometry(QRect(80, 100, 191, 151));
        pushButtonGra1->setMinimumSize(QSize(50, 100));
        pushButtonGra1->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(87, 145, 71)"));
        stackedWidget->addWidget(MenuGra);
        Gra1SlotMachine = new QWidget();
        Gra1SlotMachine->setObjectName("Gra1SlotMachine");
        spinButton = new QPushButton(Gra1SlotMachine);
        spinButton->setObjectName("spinButton");
        spinButton->setGeometry(QRect(190, 270, 101, 41));
        spinButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(125, 57, 57);"));
        slotMachineDrum1 = new QLabel(Gra1SlotMachine);
        slotMachineDrum1->setObjectName("slotMachineDrum1");
        slotMachineDrum1->setGeometry(QRect(0, 50, 175, 197));
        slotMachineDrum2 = new QLabel(Gra1SlotMachine);
        slotMachineDrum2->setObjectName("slotMachineDrum2");
        slotMachineDrum2->setGeometry(QRect(160, 50, 175, 197));
        slotMachineDrum3 = new QLabel(Gra1SlotMachine);
        slotMachineDrum3->setObjectName("slotMachineDrum3");
        slotMachineDrum3->setGeometry(QRect(320, 50, 175, 197));
        betSlotMachine = new QTextEdit(Gra1SlotMachine);
        betSlotMachine->setObjectName("betSlotMachine");
        betSlotMachine->setGeometry(QRect(70, 270, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        betSlotMachine->setFont(font);
        betSlotMachine->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 111, 4)"));
        BackToMainMenu = new QPushButton(Gra1SlotMachine);
        BackToMainMenu->setObjectName("BackToMainMenu");
        BackToMainMenu->setGeometry(QRect(330, 270, 101, 41));
        BackToMainMenu->setStyleSheet(QString::fromUtf8("color: white"));
        stackedWidget->addWidget(Gra1SlotMachine);
        Gra2 = new QWidget();
        Gra2->setObjectName("Gra2");
        BackToMainMenu_2 = new QPushButton(Gra2);
        BackToMainMenu_2->setObjectName("BackToMainMenu_2");
        BackToMainMenu_2->setGeometry(QRect(390, 0, 80, 24));
        BackToMainMenu_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255)"));
        label_Millionaire_Pytanie = new QLabel(Gra2);
        label_Millionaire_Pytanie->setObjectName("label_Millionaire_Pytanie");
        label_Millionaire_Pytanie->setGeometry(QRect(10, 80, 461, 41));
        label_Millionaire_Pytanie->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255)"));
        pushButton_Millionaire_ODP_A = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_A->setObjectName("pushButton_Millionaire_ODP_A");
        pushButton_Millionaire_ODP_A->setGeometry(QRect(0, 130, 481, 41));
        pushButton_Millionaire_ODP_A->setStyleSheet(QString::fromUtf8("font: 7pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 0, 156)"));
        pushButton_Millionaire_ODP_B = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_B->setObjectName("pushButton_Millionaire_ODP_B");
        pushButton_Millionaire_ODP_B->setGeometry(QRect(0, 180, 481, 41));
        pushButton_Millionaire_ODP_B->setStyleSheet(QString::fromUtf8("font: 7pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 0, 156)"));
        pushButton_Millionaire_ODP_C = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_C->setObjectName("pushButton_Millionaire_ODP_C");
        pushButton_Millionaire_ODP_C->setGeometry(QRect(0, 230, 481, 41));
        pushButton_Millionaire_ODP_C->setStyleSheet(QString::fromUtf8("font: 7pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 0, 156)"));
        pushButton_Millionaire_ODP_D = new QPushButton(Gra2);
        pushButton_Millionaire_ODP_D->setObjectName("pushButton_Millionaire_ODP_D");
        pushButton_Millionaire_ODP_D->setGeometry(QRect(0, 280, 481, 41));
        pushButton_Millionaire_ODP_D->setStyleSheet(QString::fromUtf8("font: 7pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 0, 156)"));
        textEdit_MillionaireBET = new QTextEdit(Gra2);
        textEdit_MillionaireBET->setObjectName("textEdit_MillionaireBET");
        textEdit_MillionaireBET->setGeometry(QRect(180, 20, 71, 41));
        textEdit_MillionaireBET->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 111, 4)"));
        on_pushButton_Milionaire_Start_clicked = new QPushButton(Gra2);
        on_pushButton_Milionaire_Start_clicked->setObjectName("on_pushButton_Milionaire_Start_clicked");
        on_pushButton_Milionaire_Start_clicked->setGeometry(QRect(250, 20, 81, 41));
        on_pushButton_Milionaire_Start_clicked->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(125, 57, 57);"));
        stackedWidget->addWidget(Gra2);
        Start = new QWidget();
        Start->setObjectName("Start");
        textLogin = new QTextEdit(Start);
        textLogin->setObjectName("textLogin");
        textLogin->setGeometry(QRect(160, 80, 241, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLogin->sizePolicy().hasHeightForWidth());
        textLogin->setSizePolicy(sizePolicy1);
        textLogin->setContextMenuPolicy(Qt::DefaultContextMenu);
        textLogin->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 11pt \"Segoe UI\";\n"
"text-align: center;"));
        textLogin->setMidLineWidth(10);
        textPassword = new QTextEdit(Start);
        textPassword->setObjectName("textPassword");
        textPassword->setGeometry(QRect(160, 10, 241, 61));
        sizePolicy1.setHeightForWidth(textPassword->sizePolicy().hasHeightForWidth());
        textPassword->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        textPassword->setFont(font1);
        textPassword->setStyleSheet(QString::fromUtf8("color: white"));
        textPassword->setMidLineWidth(4);
        pushButtonRegister = new QPushButton(Start);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(160, 220, 241, 51));
        pushButtonRegister->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: white;\n"
"background-color: rgb(44, 30, 148)"));
        pushButtonLogIn = new QPushButton(Start);
        pushButtonLogIn->setObjectName("pushButtonLogIn");
        pushButtonLogIn->setGeometry(QRect(160, 160, 241, 51));
        sizePolicy1.setHeightForWidth(pushButtonLogIn->sizePolicy().hasHeightForWidth());
        pushButtonLogIn->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(8, 115, 29, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButtonLogIn->setPalette(palette);
        pushButtonLogIn->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(8, 115, 29)"));
        stackedWidget->addWidget(Start);

        gridLayout->addWidget(stackedWidget, 5, 0, 1, 1);

        labelMenuGraUserName = new QLabel(centralwidget);
        labelMenuGraUserName->setObjectName("labelMenuGraUserName");
        labelMenuGraUserName->setStyleSheet(QString::fromUtf8("color: white"));

        gridLayout->addWidget(labelMenuGraUserName, 0, 0, 1, 1);

        labelMenuGraCredits = new QLabel(centralwidget);
        labelMenuGraCredits->setObjectName("labelMenuGraCredits");
        labelMenuGraCredits->setStyleSheet(QString::fromUtf8("color: white"));

        gridLayout->addWidget(labelMenuGraCredits, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonlogout->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButtonGra2->setText(QCoreApplication::translate("MainWindow", "Gra2", nullptr));
        pushButtonGra1->setText(QCoreApplication::translate("MainWindow", "Gra1", nullptr));
        spinButton->setText(QCoreApplication::translate("MainWindow", "SPIN", nullptr));
        slotMachineDrum1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        slotMachineDrum2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        slotMachineDrum3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BackToMainMenu->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        BackToMainMenu_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_Millionaire_Pytanie->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_Millionaire_ODP_A->setText(QCoreApplication::translate("MainWindow", "Odpowiedz A", nullptr));
        pushButton_Millionaire_ODP_B->setText(QCoreApplication::translate("MainWindow", "Odpowiedz B", nullptr));
        pushButton_Millionaire_ODP_C->setText(QCoreApplication::translate("MainWindow", "Odpowiedz C", nullptr));
        pushButton_Millionaire_ODP_D->setText(QCoreApplication::translate("MainWindow", "Odpowiedz D", nullptr));
        on_pushButton_Milionaire_Start_clicked->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        textLogin->setMarkdown(QCoreApplication::translate("MainWindow", "Password\n"
"\n"
"", nullptr));
        textPassword->setMarkdown(QCoreApplication::translate("MainWindow", "Login\n"
"\n"
"", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButtonLogIn->setText(QCoreApplication::translate("MainWindow", "Log In!", nullptr));
        labelMenuGraUserName->setText(QString());
        labelMenuGraCredits->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
