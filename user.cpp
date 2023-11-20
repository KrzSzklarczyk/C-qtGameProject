#include "user.h"

User::User()
{

}

void User::uploadFiles()
{
    m_MyFile.close();
    m_ListaUser.clear();
    m_MyFile.setFileName(m_FileName);
    if(m_MyFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream inStream(&m_MyFile);
        while(!inStream.atEnd())
        {
            QString line = inStream.readLine();
            QList<QString> split = line.split(';');
            UserType ut(split[0], split[1], split[2].toInt());
            this->m_ListaUser.push_back(ut);
        }
    }
    qDebug() << "Odczytano tekst";
    m_MyFile.close();
}

bool User::Reg(QString log, QString pass)
{
    this->uploadFiles();
    for(auto &x : this->m_ListaUser)
    {
        if(x.getLogin() == log)
        {
            qDebug() << "Ktos posiada taka nazwe uzytkownika!";
            return false;
        }
    }
    m_MyFile.setFileName(m_FileName);
    if(m_MyFile.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream outStream(&m_MyFile);
        outStream << log;
        outStream << ";";
        outStream << pass;
        outStream << ";";
        outStream << 0;
        outStream << "\n";
        qDebug() << "Zapisano nowego uzytkownika!";
        m_MyFile.close();
        return true;
    }
    else return false;
}

bool User::LogIn(QString log, QString pass)
{
    qDebug() << "here";
    this->uploadFiles();
    if(!this->m_ListaUser.isEmpty())
    {
        for(auto &x : this->m_ListaUser)
        {
            if(x.getLogin() == log && x.getPassword() == pass)
            {
                qDebug() << "if przeszlo";
                this->m_UserName = x.getLogin();
                this->m_Password = x.getPassword();
                this->m_Credits = x.getCredits();
                return true;
            }
            qDebug() << "nie przeszlo";
        }
    }
    qDebug() << "nie przeszl2";
    return false;
}

QList<UserType> User::getUserList()
{
    return this->m_ListaUser;
}

QString User::getUserName()
{
    return this->m_UserName;
}

int User::getCredits()
{
    return this->m_Credits;
}

