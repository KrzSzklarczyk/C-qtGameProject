#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

class Question
{
public:
    int m_questionNumber;
    QString m_questionContent;
    QString m_answerA_Content;
    QString m_answerB_Content;
    QString m_answerC_Content;
    QString m_answerD_Content;
    Question();
    Question(int m_questionNumber,
             const QString &questionContent,
             const QString &answerA_Content,
             const QString &answerB_Content,
             const QString &answerC_Content,
             const QString &answerD_Content);
    const QString &get_QuestionContent() const;
    const QString &get_AnswerA_Content() const;
    const QString &get_AnswerB_Content() const;
    const QString &get_AnswerC_Content() const;
    const QString &get_AnswerD_Content() const;
};

#endif // QUESTION_H
