/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textLoginReg;
    QLabel *label_2;
    QLineEdit *textPassReg;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonRegister;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(250, 250);
        Register->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127)"));
        gridLayout = new QGridLayout(Register);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 30));
        label->setMaximumSize(QSize(70, 30));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 700 10pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(label);

        textLoginReg = new QTextEdit(Register);
        textLoginReg->setObjectName("textLoginReg");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLoginReg->sizePolicy().hasHeightForWidth());
        textLoginReg->setSizePolicy(sizePolicy);
        textLoginReg->setMinimumSize(QSize(100, 30));
        textLoginReg->setMaximumSize(QSize(100, 30));
        textLoginReg->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout_2->addWidget(textLoginReg);

        label_2 = new QLabel(Register);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(70, 30));
        label_2->setStyleSheet(QString::fromUtf8("color: white ;\n"
"font: 700 10pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(label_2);

        textPassReg = new QLineEdit(Register);
        textPassReg->setObjectName("textPassReg");
        textPassReg->setMinimumSize(QSize(100, 30));
        textPassReg->setMaximumSize(QSize(100, 30));
        textPassReg->setStyleSheet(QString::fromUtf8("color:white"));
        textPassReg->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(textPassReg);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonRegister = new QPushButton(Register);
        pushButtonRegister->setObjectName("pushButtonRegister");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonRegister->sizePolicy().hasHeightForWidth());
        pushButtonRegister->setSizePolicy(sizePolicy1);
        pushButtonRegister->setMinimumSize(QSize(100, 50));
        pushButtonRegister->setMaximumSize(QSize(50, 50));
        pushButtonRegister->setFocusPolicy(Qt::StrongFocus);
        pushButtonRegister->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(48, 116, 37)"));

        horizontalLayout_2->addWidget(pushButtonRegister);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "New Login", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "New Password", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("Register", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
