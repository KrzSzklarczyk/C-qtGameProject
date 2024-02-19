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
      prng(generateSeed()),
      questionNumber(20),
      gameResult(0)
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
        for(auto &x : this->tabQuestion){
            if(x.get_AnswerA_Content().contains("///")){
                correctAnswers.push_back(x.get_AnswerA_Content());
            }
            if(x.get_AnswerB_Content().contains("///")){
                correctAnswers.push_back(x.get_AnswerB_Content());
            }
            if(x.get_AnswerC_Content().contains("///")){
                correctAnswers.push_back(x.get_AnswerC_Content());
            }
            if(x.get_AnswerD_Content().contains("///")){
                correctAnswers.push_back(x.get_AnswerD_Content());
            }
        }
        for(int i = 0; i < correctAnswers.size(); i++){
            correctAnswers[i].remove(0,3);
        }
        for(int i = 0; i < tabQuestion.size(); i++){
            if(tabQuestion[i].get_AnswerA_Content().contains("///")){
                tabQuestion[i].m_answerA_Content.remove(0,3);
            }
            if(tabQuestion[i].get_AnswerB_Content().contains("///")){
                tabQuestion[i].m_answerB_Content.remove(0,3);
            }
            if(tabQuestion[i].get_AnswerC_Content().contains("///")){
                tabQuestion[i].m_answerC_Content.remove(0,3);
            }
            if(tabQuestion[i].get_AnswerD_Content().contains("///")){
                tabQuestion[i].m_answerD_Content.remove(0,3);
            }
        }
}

void Millionaire::DrawQuestion(){
    int value = prng.bounded(questionNumber);
    m_question->setText(tabQuestion[value].get_QuestionContent());
    m_answerA->setText(tabQuestion[value].get_AnswerA_Content());
    m_answerB->setText(tabQuestion[value].get_AnswerB_Content());
    m_answerC->setText(tabQuestion[value].get_AnswerC_Content());
    m_answerD->setText(tabQuestion[value].get_AnswerD_Content());
    tabQuestion.removeAt(value);
    questionNumber--;
}

void Millionaire::StartGame(){
    DrawQuestion();
}

bool Millionaire::IsAnswerCorrect(QString answer){
    for(int i = 0; i < correctAnswers.size(); i++){
        if(correctAnswers[i] == answer){
            return true;
        }
    }
    return false;
}
