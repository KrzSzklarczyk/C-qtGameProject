#ifndef USER_H
#define USER_H

#include <usertype.h>

#include <QFile>
#include <qstring.h>
#include <QFileDialog>
#include <iostream>
#include <QMainWindow>

class User
{
private:
    QString m_FileName = "Dane.txt";
    QFile m_MyFile;
    QList<UserType> m_ListaUser;
    QString m_UserName;
    QString m_Password;
    int m_Credits;
public:
    User();
    void uploadFiles();
    QString getUserName();
    QList<UserType> getUserList();
    int getCredits();
    void AddCredits(int addC);
    void SubstractCredits(int subC);
    bool LogIn(QString log, QString pass);
    bool Reg(QString log, QString pass);
    void UpdateUser();
};

#endif // USER_H
