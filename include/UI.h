#ifndef MILK_UI_H
#define MILK_UI_H

#include <iostream>
#include <array>

#define NUM_QUESTIONS 10
#define NUM_ANSWERS 4

static const std::string SGNH = " Star Guardian New Horizon ";

class UI
{
public:
    // Constructor
    UI(int i_sizeOfLine);

    // Default Destructor
    ~UI() = default;

    // Prints Header that separates the questions
    void printHeader();

    // Prints a String, separated into chunks of size m_sizeOfLine
    void printString(
            const std::string &i_inputString);

    // Prints result of program
    void printResult();

    // Returns the element at index i_questionIndex of questionList
    const std::string getQuestion(
            int i_questionIndex);

    // Returns the element at index i_questionIndex and i_answerIndex of answerList
    const std::string getAnswer(
            int i_questionIndex,
            int i_answerIndex);

private:
    int m_sizeOfLine;
    std::array<std::string, NUM_QUESTIONS> questionList;
    std::array<std::array<std::string, NUM_ANSWERS>, NUM_QUESTIONS> answerList;

    // Populates questionList
    void setUpQuestions();

    // Populates answerList
    void setUpAnswers();
};

#endif //MILK_UI_H
