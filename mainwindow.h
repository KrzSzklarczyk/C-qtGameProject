#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "register.h"
#include <user.h>
#include <QMainWindow>
#include <QMessageBox>

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
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setGUI();
public slots:
    void on_pushButtonLogIn_clicked();
    void on_pushButtonRegister_clicked();
    void on_pushButtonGra1_clicked();
    void on_pushButtonGra2_clicked();
    void on_pushButtonGra3_clicked();
    void on_pushButtonlogout_clicked();
};
#endif // MAINWINDOW_H
