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
    if(us.Reg(ui->textLoginReg->toPlainText(), ui->textPassReg->toPlainText()))
    {
        QMessageBox mesBox;
        mesBox.setText("Udalo sie poprawnie zarejestrowac!!!");
        mesBox.exec();
    }
    else
    {
        QMessageBox mesBox;
        mesBox.setText("Nie udalo sie poprawnie zarejestrowac!!!");
        mesBox.exec();
    }
}
