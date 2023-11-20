#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <User.h>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

private:
    Ui::Register *ui;
    User us;
public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    void setGUI();

public slots:
    void on_pushButtonRegister_clicked();

};

#endif // REGISTER_H
