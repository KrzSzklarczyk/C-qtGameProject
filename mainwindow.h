#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "register.h"
#include <User.h>
#include <QMainWindow>
#include <QMessageBox>
#include "slotmachine.h"
#include "millionaire.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    User us;
    Register *m_okno;
    slotmachine* sm;
    Millionaire* ml;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setGUI();
    void setAnswers();
    void setAnswersDisable();
    void setAnswersEnable();
public slots:
    void on_pushButtonLogIn_clicked();
    void on_pushButtonRegister_clicked();
    void on_pushButtonGra1_clicked();
    void on_pushButtonGra2_clicked();
    void on_pushButtonlogout_clicked();
    void on_BackToMainMenu_clicked();
    void on_spinButton_clicked();
    void handleGameFinished(int result);
    void on_BackToMainMenu_2_clicked();
    void on_pushButton_Millionaire_ODP_A_clicked();
    void on_pushButton_Millionaire_ODP_B_clicked();
    void on_pushButton_Millionaire_ODP_C_clicked();
    void on_pushButton_Millionaire_ODP_D_clicked();
    void on_on_pushButton_Milionaire_Start_clicked_clicked();
private slots:
    void on_pushButton_exit_clicked();
};
#endif // MAINWINDOW_H
