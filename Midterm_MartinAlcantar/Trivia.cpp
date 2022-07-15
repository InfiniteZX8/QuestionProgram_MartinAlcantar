#include "Trivia.h"

int Trivia::InputValidation() {
    int x = 0;
    std::cin >> x;
    while (std::cin.fail())
    {
        std::cout << "Invalid input\n" << std::endl;
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Please write a number\n" << std::endl;
        std::cin >> x;
    }
    return x;
}

void Trivia::PromptQuestion(std::string question, std::string answer1, std::string answer2, std::string answer3, std::string answer4) {
    std::cout << question << "\n" << std::endl;
    std::cout << answer1 << "   " << answer2 << "   " << answer3 << "   " << answer4 << "\n" << std::endl;
};

bool Trivia::CheckAnswer(int correctanswer, int answer, bool ifright) {
    if (answer == correctanswer) {
        std::cout << "\nCorrect, good answer!\n" << std::endl;
        ifright = true;
    }
    else {
        std::cout << "\nUff, incorrect answer\n" << std::endl;
        ifright = false;
    }
    return ifright;
}
