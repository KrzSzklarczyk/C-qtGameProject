#ifndef USERTYPE_H
#define USERTYPE_H

#include <qstring.h>



class UserType
{
private:
    QString m_Login;
    QString m_Password;
    int m_Credits;
public:
    UserType();
    UserType(QString, QString, int);
    UserType(QString, QString);
    void setLogin(QString l);
    void setPassword(QString p);
    void setCredits(int c);
    int getCredits();
    QString getLogin();
    QString getPassword();
};

#endif // USERTYPE_H
