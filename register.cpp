#include "register.h"
#include "ui_register.h"

#include <qmessagebox.h>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButtonRegister_clicked()
{
    QMessageBox mesBox;
    if(us.Reg(ui->textLoginReg->toPlainText(), ui->textPassReg->toPlainText()))
    {
        mesBox.setText("Udalo sie poprawnie zarejestrowac!!!");
        mesBox.exec();
        close();
    }
    else
    {
        mesBox.setText("Taka nazwa uzytkownika juz istnieje!!!");
        mesBox.exec();
        close();
    }
}
