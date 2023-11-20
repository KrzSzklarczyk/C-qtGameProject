#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->us.uploadFiles();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonLogIn_clicked()
{
    if(us.LogIn(ui->textLogin->toPlainText(), ui->textPassword->toPlainText()))
    {
        QMessageBox mesBox;
        mesBox.setText("Udalo sie poprawnie zalogowac!!!");
        mesBox.exec();
        this->setGUI();
        ui->stackedWidget->setCurrentWidget(ui->MenuGra);
    }
    else
    {
        QMessageBox mesBox;
        mesBox.setText("Zly login lub haslo!!!");
        mesBox.exec();
    }

}

void MainWindow::on_pushButtonRegister_clicked()
{
    m_okno = new Register(nullptr);
    m_okno->exec();
    delete m_okno;
}

void MainWindow::setGUI()
{
    ui->labelMenuGraUserName->setText(us.getUserName());
    ui->labelMenuGraCredits->setText(QString::number(us.getCredits()));
}

void MainWindow::on_pushButtonlogout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Start);
}

void MainWindow::on_pushButtonGra1_clicked()
{

}


void MainWindow::on_pushButtonGra2_clicked()
{

}


void MainWindow::on_pushButtonGra3_clicked()
{

}



