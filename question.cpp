#include "question.h"

Question::Question()
{}

Question::Question(int questionNumber,
                   const QString &questionContent,
                   const QString &answerA_Content,
                   const QString &answerB_Content,
                   const QString &answerC_Content,
                   const QString &answerD_Content)
    : m_questionNumber(questionNumber),
      m_questionContent(questionContent),
      m_answerA_Content(answerA_Content),
      m_answerB_Content(answerB_Content),
      m_answerC_Content(answerC_Content),
      m_answerD_Content(answerD_Content)
{

}

const QString &Question::get_QuestionContent() const {
    return m_questionContent;
}

const QString &Question::get_AnswerA_Content() const {
    return m_answerA_Content;
}

const QString &Question::get_AnswerB_Content() const {
    return m_answerB_Content;
}

const QString &Question::get_AnswerC_Content() const {
    return m_answerC_Content;
}

const QString &Question::get_AnswerD_Content() const {
    return m_answerD_Content;
}
