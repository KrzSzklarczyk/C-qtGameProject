#include "usertype.h"

UserType::UserType()
{

}

UserType::UserType(QString l, QString p, int c)
{
    this->m_Login = l;
    this->m_Password = p;
    this->m_Credits = c;
}

UserType::UserType(QString l, QString p)
{
    this->m_Login = l;
    this->m_Password = p;
}

void UserType::setLogin(QString l)
{
    this->m_Login = l;
}

void UserType::setPassword(QString p)
{
    this->m_Password = p;
}

void UserType::setCredits(int c)
{
    this->m_Credits = c;
}

int UserType::getCredits()
{
    return m_Credits;
}

QString UserType::getLogin()
{
    return this->m_Login;
}

QString UserType::getPassword()
{
    return this->m_Password;
}

