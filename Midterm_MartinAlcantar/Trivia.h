#pragma once
#include <iostream>
class Trivia
{
public:
	int InputValidation();
	void PromptQuestion(std::string question, std::string answer1, std::string answer2, std::string answer3, std::string answer4);
	bool CheckAnswer(int correctanswer, int answer, bool ifright);
};

