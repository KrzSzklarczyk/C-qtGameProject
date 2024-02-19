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
    if(us.LogIn(ui->textLogin->toPlainText(), ui->textPassword->text()))
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

void MainWindow::setAnswersDisable()
{
    ui->pushButton_Millionaire_ODP_A->setDisabled(1);
    ui->pushButton_Millionaire_ODP_B->setDisabled(1);
    ui->pushButton_Millionaire_ODP_C->setDisabled(1);
    ui->pushButton_Millionaire_ODP_D->setDisabled(1);
}

void MainWindow::setAnswersEnable()
{
    ui->pushButton_Millionaire_ODP_A->setDisabled(0);
    ui->pushButton_Millionaire_ODP_B->setDisabled(0);
    ui->pushButton_Millionaire_ODP_C->setDisabled(0);
    ui->pushButton_Millionaire_ODP_D->setDisabled(0);
}

void MainWindow::on_pushButtonlogout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Start);
}

void MainWindow::on_pushButtonGra1_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Gra1SlotMachine);
    sm = new slotmachine(this,ui->slotMachineDrum1,ui->slotMachineDrum2,ui->slotMachineDrum3);
    connect(sm,&slotmachine::gameFinished,this,&MainWindow::handleGameFinished);
    this->setGUI();
}

void MainWindow::on_pushButtonGra2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Gra2);
    ml = new Millionaire(ui->label_Millionaire_Pytanie,
                         ui->pushButton_Millionaire_ODP_A,
                         ui->pushButton_Millionaire_ODP_B,
                         ui->pushButton_Millionaire_ODP_C,
                         ui->pushButton_Millionaire_ODP_D);
    this->setGUI();
}

void MainWindow::on_BackToMainMenu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->MenuGra);
}

void MainWindow::on_spinButton_clicked()
{
    QString text = ui->betSlotMachine->toPlainText();
    bool isInteger;
    int number = text.toInt(&isInteger);
    if((isInteger && number > 0) && us.getCredits() >= number){
        us.SubstractCredits(number);
        this->setGUI();
        sm->startGame(number);
    }
    else{
        QMessageBox mesBox;
        mesBox.setText("Nieprawidlowa watrosc lub za malo kredytow");
        mesBox.exec();
    }
}

void MainWindow::handleGameFinished(int result){
    us.AddCredits(result);
    this->setGUI();
    if(result > 0){
        QMessageBox mesBox;
        mesBox.setText("Udalo ci sie wygrac!");
        mesBox.exec();
    }
    else{
        QMessageBox mesBox;
        mesBox.setText("Nastepnym razem sie uda");
        mesBox.exec();
    }
}

void MainWindow::on_BackToMainMenu_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->MenuGra);
}

void MainWindow::on_pushButton_Millionaire_ODP_A_clicked()
{
    setAnswersDisable();
    if(ml->IsAnswerCorrect(ui->pushButton_Millionaire_ODP_A->text()))
    {
        us.AddCredits(3 * ui->textEdit_MillionaireBET->toPlainText().toInt());
        this->setGUI();
    }
}

void MainWindow::on_pushButton_Millionaire_ODP_B_clicked()
{
    setAnswersDisable();
    if(ml->IsAnswerCorrect(ui->pushButton_Millionaire_ODP_B->text()))
    {
        us.AddCredits(3 * ui->textEdit_MillionaireBET->toPlainText().toInt());
        this->setGUI();
    }
}

void MainWindow::on_pushButton_Millionaire_ODP_C_clicked()
{
    setAnswersDisable();
    if(ml->IsAnswerCorrect(ui->pushButton_Millionaire_ODP_C->text()))
    {
        us.AddCredits(3 * ui->textEdit_MillionaireBET->toPlainText().toInt());
        this->setGUI();
    }
}

void MainWindow::on_pushButton_Millionaire_ODP_D_clicked()
{
    setAnswersDisable();
    if(ml->IsAnswerCorrect(ui->pushButton_Millionaire_ODP_D->text()))
    {
        us.AddCredits(3 * ui->textEdit_MillionaireBET->toPlainText().toInt());
        this->setGUI();
    }
}

void MainWindow::on_on_pushButton_Milionaire_Start_clicked_clicked()
{
    setAnswersEnable();
    QString text = ui->textEdit_MillionaireBET->toPlainText();
    bool isInteger;
    int number = text.toInt(&isInteger);
    if((isInteger && number > 0) && us.getCredits() >= number){
        us.SubstractCredits(number);
        this->setGUI();
        ml->StartGame();
    }
    else{
        QMessageBox mesBox;
        mesBox.setText("Nieprawidlowa watrosc lub za malo kredytow");
        mesBox.exec();
    }
}

void MainWindow::on_pushButton_exit_clicked()
{
    QApplication::quit();
}

