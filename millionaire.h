#ifndef MILLIONAIRE_H
#define MILLIONAIRE_H

#include "qlabel.h"
#include <QFile>
#include <qstring.h>
#include <QFileDialog>
#include <iostream>
#include "QPushButton.h"
#include <QRandomGenerator>
#include <QList>
#include "SeedMaker.h"
#include "question.h"

class Millionaire
{
private:
    QString m_FileName = "PytaniaMilionerzy.txt";
    QFile m_MyFile;
    QLabel* m_question;
    QPushButton* m_answerA;
    QPushButton* m_answerB;
    QPushButton* m_answerC;
    QPushButton* m_answerD;
    QRandomGenerator prng;
    QList<Question> tabQuestion;

    void DrawQuestion();
    void Set_Questions();
public:
    Millionaire(QLabel* question = nullptr,
                QPushButton* answerA = nullptr,
                QPushButton* answerB = nullptr,
                QPushButton* answerC = nullptr,
                QPushButton* answerD = nullptr);
    void StartGame();
};

#endif // MILLIONAIRE_H
