#pragma once
#include "MathCalculator.hpp"
#include <iostream>

class Option
{
private:
	int selectOption = 0;

public:
	
	Option() 
	{
		std::cout << "\t\tWelcome to my calculator!\n" 
			<< "=========================================================\n"
			<< std::endl;
	}
	
	~Option()
	{
	}
	
	void userSetChoice() {
		int UserChoice = 0;
		std::cout << "Please choose one of the following Options to continue:\n"
			<< "\n1. Math Calculator\n"
			<< "2. Currency Converter\n"
			<< "3. Bisecture Procedure\n"
			<< "4. Sort Algorithm\n" << std::endl;
		std::cout << "Enter the number to continue: ";
		std::cin >> UserChoice;
		setOption(UserChoice);
	}

	void checkUserChoice()
	{
		if (selectOption == 1)
		{
			MathCalculator calculator;
			calculator.userSetNumbers();
			calculator.userSetOperation();
			calculator.printResult();
		}
	}

	int getOption(int selectOption) const { return selectOption; }

	void setOption(int auswahl) { selectOption = auswahl; }
};