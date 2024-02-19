#include "millionaire.h"

Millionaire::Millionaire(QLabel* q,
                         QPushButton* ansA,
                         QPushButton* ansB,
                         QPushButton* ansC,
                         QPushButton* ansD)
    : m_question(q),
      m_answerA(ansA),
      m_answerB(ansB),
      m_answerC(ansC),
      m_answerD(ansD),
      prng(generateSeed())
{
    m_question->setText("Rozpocznij Gre");
    m_answerA->setText("");
    m_answerB->setText("");
    m_answerC->setText("");
    m_answerD->setText("");
    Set_Questions();
}

void Millionaire::Set_Questions(){
    QFile m_MyFileQuestions(m_FileName);
        if(m_MyFileQuestions.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream inStream(&m_MyFileQuestions);
            while(!inStream.atEnd())
             {
                QString line = inStream.readLine();
                QList<QString> split = line.split(';');
                Question que(split[0].toInt(), split[1], split[2], split[3], split[4], split[5]);
                tabQuestion.push_back(que);
             }
             m_MyFileQuestions.close();
        }
}

void Millionaire::DrawQuestion(){
    m_question->setText(tabQuestion[prng.bounded(20)].get_QuestionContent());
    m_answerA->setText(tabQuestion[prng.bounded(20)].get_AnswerA_Content());
    m_answerB->setText(tabQuestion[prng.bounded(20)].get_AnswerB_Content());
    m_answerC->setText(tabQuestion[prng.bounded(20)].get_AnswerC_Content());
    m_answerD->setText(tabQuestion[prng.bounded(20)].get_AnswerD_Content());
}

void Millionaire::StartGame(){
    DrawQuestion();
}


