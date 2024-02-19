#ifndef MILLIONAIRE_H
#define MILLIONAIRE_H

#include <QObject>
#include <QWidget>
#include <QFile>
#include <qstring.h>
#include <QRandomGenerator>
#include <QList>
#include "QPushButton.h"
#include "qlabel.h"
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
    QList<QString> correctAnswers;
    int questionNumber;
    int gameResult;

    void Set_Questions();
public:
    Millionaire(QLabel* question = nullptr,
                QPushButton* answerA = nullptr,
                QPushButton* answerB = nullptr,
                QPushButton* answerC = nullptr,
                QPushButton* answerD = nullptr);
    void StartGame();
    void DrawQuestion();
    bool IsAnswerCorrect(QString answer);
    QString WrapText(QString t);
};

#endif // MILLIONAIRE_H
