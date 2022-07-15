// Midterm_MartinAlcantar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Trivia.h"

int main()
{
    int choice = 0;
    bool correct = false;
    int goodanswers = 0;
    int badanswers = 0;
    Trivia quizz;
    std::string name;
    std::cout << "Welcome to the trivia program, please tell me your name!\n" << std::endl;

    std::cin >> name;
    std::cin.ignore(INT_MAX, '\n');

    std::cout << "\nHello " << name << ", let's start with the questions, there's 5 of them,\nyou can chose one of four answers, good luck!\n" << std::endl;

    quizz.PromptQuestion("What is the capital of the Netherlands?", "1.Buenos Aires", "2.Amsterdamn", "3.Oslo", "4.Bucharest");

    choice = quizz.InputValidation();
    std::cin.ignore(INT_MAX, '\n');;
    
    correct = quizz.CheckAnswer(2, choice, correct);

    system("\npause");
    system("cls");

    if (correct) {
       goodanswers++;
    }
    else {
       badanswers++;
    }

    quizz.PromptQuestion("Which is the smallest state in the United States?", "1.Oregon", "2.West Virginia", "3.Maine", "4.Rhode Island");

    choice = quizz.InputValidation();
    std::cin.ignore(INT_MAX, '\n');;

    correct = quizz.CheckAnswer(4, choice, correct);

    if (correct) {
        goodanswers++;
    }
    else {
        badanswers++;
    }
    system("\npause");
    system("cls");

    quizz.PromptQuestion("Mexico is not the official name of the country, wich one is it?", "1.Mexican Republic", "2.United Mexican States", "3.Mexican Union", "4.Mexican Confederation");

    choice = quizz.InputValidation();
    std::cin.ignore(INT_MAX, '\n');;

    correct = quizz.CheckAnswer(2, choice, correct);
    system("\npause");
    system("cls");

    if (correct) {
        goodanswers++;
    }
    else {
        badanswers++;
    }

    quizz.PromptQuestion("Sometimes some animals aren't what they seem, wich one of these is not a bear?", "1.Panda Bear", "2.Grizzly Bear", "3.Polar Bear", "4.Black Bear");

    choice = quizz.InputValidation();
    std::cin.ignore(INT_MAX, '\n');;

    correct = quizz.CheckAnswer(1, choice, correct);
    system("\npause");
    system("cls");

    if (correct) {
        goodanswers++;
    }
    else {
        badanswers++;
    }

    quizz.PromptQuestion("World War II was a really terrible event, but sometimes people don't know that much about it\n.Wich one of these battles didn't happen on WWII?", "1.Battle of England", "2.Battle of Berlin", "3.Battle of Verdun", "4.Battle of Kursk");

    choice = quizz.InputValidation();
    std::cin.ignore(INT_MAX, '\n');;

    correct = quizz.CheckAnswer(3, choice, correct);
    system("\npause");
    system("cls");

    if (correct) {
        goodanswers++;
    }
    else {
        badanswers++;
    }

    std::cout << "We are done my friend, time to see your puntuation\n" << std::endl;

    if (goodanswers == 5) {
        std::cout << "\nNice work, you have " << goodanswers<<"/"<<5 << ", you're a very smart person!\n";
    }
    else if (goodanswers >= 3) {
        std::cout << "\nGood, you have " << goodanswers << "/" << 5 << " and only had " << badanswers << "/" << 5 << " bad answers, good try!\n";
    }
    else if (goodanswers <= 3) {
        std::cout << "\nHmm not very good, you have " << goodanswers << "/" << 5 << " and " << badanswers << "/" << 5 << " bad answers, do a better work next time\n";
    }
    else if (goodanswers == 0) {
        std::cout << "\nReally?! You fail all the questions! " << goodanswers << "/" << 5 << ", you need to learn more stuff in life!\n";
    }


    std::cout << "\nThanks for using the trivia program, hope to see you later!\n\nPress any letter to continue...";
    system("\npause");
}
