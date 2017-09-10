#include "UI.h"

#define SIZE_OF_LINE 75

int main()
{
    char userInputChar;
    int userInputInt;
    int questionCount = 0;
    std::array<int, 10> answers{};
    UI MainUI(SIZE_OF_LINE);

    MainUI.printHeader();

    MainUI.printString("Which Star Guardian are you?");

    MainUI.printString("Change is on the horizon with the arrival of a mysterious new team from the outer edges of the "
                       "universe. Discover which of these new Guardians you're most aligned with by taking the quiz.");

    MainUI.printString("Press press the Space Key to Begin, and 0 to quit at any time.");

    std::cin.get(userInputChar);

    while (!isspace(userInputChar))
    {
        MainUI.printString("Please press the Space Key.");
        std::cin.ignore();
        std::cin.get(userInputChar);
    }

    MainUI.printHeader();
    while ('0' != userInputChar && questionCount < 9)
    {
        int numOfAnswers = 0;

        std::cout << "Question " << questionCount + 1 << std::endl;
        MainUI.printString(MainUI.getQuestion(questionCount));

        for (int i = 0; i < NUM_ANSWERS; i++)
        {
            MainUI.printString(MainUI.getAnswer(questionCount, i));
            numOfAnswers++;
        }

        std::cin.ignore();
        std::cin.get(userInputChar);
        userInputInt = userInputChar - '0';

        while (userInputInt < 1 || userInputInt > numOfAnswers)
        {
            MainUI.printString("Please enter a valid answer");
            std::cin.ignore();
            std::cin.get(userInputChar);
            userInputInt = userInputChar - '0';
        }

        // userInputInt is being stored but not used because this program has a pre-determined result :)
        answers[questionCount] = userInputInt;

        questionCount++;

        MainUI.printHeader();
    }
    MainUI.printResult();

    return 0;
}