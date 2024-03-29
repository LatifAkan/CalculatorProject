#pragma once
#include <iostream>

class MathCalculator
{
private: 

	double m_firstNum = 0.0, m_secondNum = 0.0;
	int selectOperation = 0;

public:

	MathCalculator() 
	{
		std::cout << "\n\tYou selected the Math Calculator\n"
			<< "=========================================================\n"
			<< std::endl;
	}
	~MathCalculator() 
	{ // Resetting numbers & operattion
		m_firstNum = 0.0;
		m_secondNum = 0.0;
		selectOperation = 0;
	}

	// Setter & Getter for operation
	int getOperation(int selectOperation) const { return selectOperation; }

	void setOperation(int operation)
	{
		selectOperation = operation;
	
	}

	// Setter & Getter for numbers
	double getFirstNumber(double m_firstNum) const { return m_firstNum; }
	double getSecondNumber(double m_SecondNum) const { return m_secondNum; }

	void setNumber(double num1, double num2)
	{
		m_firstNum = num1; 
		m_secondNum = num2;
	}

	void userSetNumbers()
	{
		double number1 = 0.0, number2 = 0.0;
		std::cout << "Enter your first number: ";
		std::cin >> number1;
		std::cout << "Enter your second number: ";
		std::cin >> number2;
		setNumber(number1, number2);
	}

	void userSetOperation()
	{
		int userMathOperation = 0;
		std::cout << "Choose the operation for the calculation:\n"
			<< "\n1. Add\n"
			<< "2. Subtract\n"
			<< "3. Multiply\n"
			<< "4. Divide\n"
			<< "5. Change numbers\n"
			<< "Q to exit the program\n" << std::endl;

		std::cout << "Select the number for the operation: ";
		std::cin >> userMathOperation;
		setOperation(userMathOperation);
	}

	void printResult()
	{
		std::cout << std::endl;
		while (selectOperation != 'q' || selectOperation != 'Q')
		{
			if (selectOperation == 1)
				std::cout << "Result: " << m_firstNum << " " << "+" << " " << m_secondNum << " = " << m_firstNum + m_secondNum << std::endl;
			if (selectOperation == 2)
				std::cout << "Result: " << m_firstNum << " " << "-" << " " << m_secondNum << " = " << m_firstNum - m_secondNum << std::endl;
			if (selectOperation == 3)
				std::cout << "Result: " << m_firstNum << " " << "*" << " " << m_secondNum << " = " << m_firstNum * m_secondNum << std::endl;
			if (selectOperation == 4) // add to check if num2 = 0
				if (m_secondNum != 0)
					std::cout << "Result: " << m_firstNum << " " << "/" << " " << m_secondNum << " = " << m_firstNum / m_secondNum << std::endl;
				else
					std::cout << "Dividing by 0 is forbidden!\n" << std::endl;

			if (selectOperation == 5)
			{
				userSetNumbers();
				userSetOperation();
				printResult();
			}
		}
	}


<<<<<<< HEAD
};
=======
};
>>>>>>> cb34c319926ff15715aebff760a691a4fbf9bc03
