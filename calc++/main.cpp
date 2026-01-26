#include <iostream>
#include <string>
#include <cmath>

int main()
{
	double n1, n2;
	int ques;
	std::string op;

	std::cout << "\nWelcome to Calc++\n\n";

	do
	{	
		std::cout << "First Number: ";
		std::cin >> n1;

		std::cout << "Operator(+, -, x, ÷, ^: ";
		std::cin >> op;
		
		std::cout << "Second Number: ";
		std::cin >> n2;

		if(op == "+")
		{
			std::cout << "\n" << n1 <<  op << n2 << " = " << n1 + n2 << std::endl; 
		}
		else if(op == "-")
		{
			std::cout << "\n" << n1 << op << n2 << " = " << n1 - n2 << std::endl;
		}
		else if(op == "*" || op == "x" || op == ".")
		{
			std::cout << "\n" << n1 << op << n2 << " = " << n1 * n2 << std::endl;
		}
		else if(op == "÷" || op == "/")
		{
			std::cout << "\n" << n1 << op << n2 << " = " << n1 / n2 << std::endl;
		}
		else if(op == "^")
		{
			std::cout << "\n" << n1 << op << n2 << " = " << std::pow(n1,  n2) << std::endl;
		}
		else
		{
			std::cout << "\n\nIncorrect Operator\n\n";
		}

		std::cout << "\nMake another calc?\n";
		std::cout << "1 - Yes\n";
		std::cout << "2 - No\n";
		std::cin >> ques;

	}while (ques != 2);

	std::cout << "\nCalc++ Terminated!\n";

	return 0;
}
