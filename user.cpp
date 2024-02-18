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
        outStream << 1000;
        outStream << "\n";
        qDebug() << "Zapisano nowego uzytkownika!";
        m_MyFile.close();
        return true;
    }
    else return false;
}

bool User::LogIn(QString log, QString pass)
{
    this->uploadFiles();
    if(!this->m_ListaUser.isEmpty())
    {
        for(auto &x : this->m_ListaUser)
        {
            if(x.getLogin() == log && x.getPassword() == pass)
            {
                this->m_UserName = x.getLogin();
                this->m_Password = x.getPassword();
                this->m_Credits = x.getCredits();
                qDebug() << "Udalo sie poprawnie zalogowac!";
                return true;
            }
        }
    }
    return false;
}

void User::UpdateUser()
{
    m_MyFile.close();
    m_MyFile.setFileName(m_FileName);
    QString content;
    QTextStream inStream(&m_MyFile);
    if(m_MyFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!inStream.atEnd())
        {
            QString line = inStream.readLine();
            if(!line.contains(this->m_UserName))
            {
                content += line + "\n";
            }
        }
    }
    m_MyFile.close();
    if(m_MyFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        m_MyFile.write(content.toUtf8());
        inStream << this->m_UserName;
        inStream << ";";
        inStream << this->m_Password;
        inStream << ";";
        inStream << this->m_Credits;
        inStream << "\n";
    }
    m_MyFile.close();
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

void User::AddCredits(int addC){
    this->m_Credits+=addC;
    this->UpdateUser();
}

void User::SubstractCredits(int subC){
    this->m_Credits-=subC;
    this->UpdateUser();
}
