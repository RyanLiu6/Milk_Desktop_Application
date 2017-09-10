#include "UI.h"

UI::UI(int i_sizeOfLine)
{
    m_sizeOfLine = i_sizeOfLine;
    setUpQuestions();
    setUpAnswers();
}

void UI::printHeader()
{
    int sizeOfHeader = m_sizeOfLine - SGNH.size();
    for (int i = 0; i < sizeOfHeader; i++)
    {
        if (i == sizeOfHeader/2)
        {
            std::cout << SGNH;
        }
        else
        {
            std::cout << "*";
        }
    }
    std::cout << std::endl;
}

void UI::printString(const std::string &i_inputString)
{
    std::string Chunk;
    for (int i = 0; i < i_inputString.size(); i += m_sizeOfLine)
    {
        Chunk = i_inputString.substr(i, m_sizeOfLine);

        if (isspace(Chunk[0]))
        {
            std::cout << Chunk.substr(1, Chunk.size()) << std::endl;
        }
        else
        {
            std::cout << Chunk << std::endl;
        }
    }
}

void UI::printResult()
{
    printString("You are Star Guardian AHRI");
    printString("You are a charismatic leader and carry yourself with the practice poise of a queen bee and the cunning of a fox."
                "Despite your effortless popularity, there are only a few you would call friends, and even fewer you would call family."
                "For those who are welcome in your innermost circle, you would go to any lengths to ensure their safety and happiness;"
                "everyone else gets the tough love treatment. Shine on; you're the coolest (and you know it)");

    printHeader();
    printString("Now buy me Star Guardian Ahri :DARKRYAN:");
}


const std::string UI::getQuestion(int i_questionIndex)
{
    return questionList.at(i_questionIndex);
}

const std::string UI::getAnswer(int i_questionIndex, int i_answerIndex)
{
    return answerList.at(i_questionIndex).at(i_answerIndex);
}

void UI::setUpQuestions()
{
    questionList[0] = "I don't get mad. I get...";
    questionList[1] = "You have a major project due tomorrow. How do you feel?";
    questionList[2] = "You have free time. Where do you go?";
    questionList[3] = "You're walking in the woods when you see a tree has fallen in your path. What do you do?";
    questionList[4] = "You're lost in the darkness of space, when another Star Guardian comes to your aid. Who do you hope it is?";
    questionList[5] = "Memories are...";
    questionList[6] = "Which is stronger?";
    questionList[7] = "Why can't I just...";
    questionList[8] = "You like someone! What do you do about it?";
    questionList[9] = "Will you buy Ryan Star Guardian Ahri?";
}

void UI::setUpAnswers()
{
    answerList[0][0] = "1. Even";
    answerList[0][1] = "2. Furious";
    answerList[0][2] = "3. Amused";
    answerList[0][3] = "4. Sad";

    answerList[1][0] = "1. Eh, I'm not worried";
    answerList[1][1] = "2. Huh? What project?";
    answerList[1][2] = "3. I prepared for weeks! I've got this";
    answerList[1][3] = "4. Everyone knows I'll blow them away";

    answerList[2][0] = "1. Stay home";
    answerList[2][1] = "2. Far away from here";
    answerList[2][2] = "3. Check out the latest event in town";

    answerList[3][0] = "1. I make my own path";
    answerList[3][1] = "2. I trust my friends to know where to go";
    answerList[3][2] = "3. I try to find a new path";

    answerList[4][0] = "1. Ahri";
    answerList[4][1] = "2. Ahri";
    answerList[4][2] = "3. Ahri";
    answerList[4][3] = "4. Ahri";

    answerList[5][0] = "1. Something that gives us strength";
    answerList[5][1] = "2. Burdens";
    answerList[5][2] = "3. Irrelevant";

    answerList[6][0] = "1. Love";
    answerList[6][1] = "2. Hate";

    answerList[7][0] = "1. Make everyone happy?";
    answerList[7][1] = "2. Do what I want?";
    answerList[7][2] = "3. Find peace?";
    answerList[7][3] = "4. Decide for myself";

    answerList[8][0] = "1. I don't have time to like someone";
    answerList[8][1] = "2. Keep it a secret";
    answerList[8][2] = "3. Tell Them";

    answerList[9][0] = "1. Yes";
    answerList[9][1] = "2. Hell yeah";
    answerList[9][2] = "3. Of course";
    answerList[9][3] = "4. No because I'm buying him a Gundam";
}
