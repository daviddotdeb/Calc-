#include <iostream>
#include <string>
#include <cmath>

int question()
{
	int quest;
	std::cout << "\nMake Another Calc?\n";
	std::cout << "1 - Yes\n";
	std::cout << "2 - No\n";
	std::cin >> quest;
	
	return quest;
}
int isEven_OR_Odd()
{
	int twin_num;
	std::cout << "Write a number: ";
	std::cin >> twin_num;
	
	if(twin_num % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void isFactorial()
{
	int facn, aux = 1;
	std::cout << "Write a Number: ";
	std::cin >> facn;
	
	std::cout << facn << "!\n";
	
	for(int c = 1; c <= facn; facn--)
	{
		std::cout << facn << std::endl;
		aux *= facn;
	}
	
	std::cout << "=\n" << aux << std::endl;
}

void calculator()
{
    double n1, n2;
	int decision;
	std::string op;

	std::cout << "\nWelcome to Calc++\n\n";

	std::cout << "How much numbers do you want?: \n1 - Just One\n2 - Two\n";
	std::cin >> decision;

    switch(decision)
	{
        case 1:
            do //case chose 1 do it	
			{
				std::cout << "Operator(!, p(Even or Odd): ";
				std::cin >> op;
				

				if (op == "!")
				{
					isFactorial();
				}
				else if(op == "p" || op == "P")
				{
					if(isEven_OR_Odd() == 0)
					{
						std::cout << "Your number is an Even Number\n";
					}
					else
					{
						std::cout << "Your Number is an Odd Number\n";
					}
				}
				else
				{
					std::cout << "\nIncorrect Operator\n\n";
				}
			}while (question() == 1);
			break;

		case 2: //here we use two numbers and a diversity of operators
			do
			{	
				std::cout << "First Number: ";
				std::cin >> n1;

				std::cout << "Operator(+, -, x, ÷, ^): ";
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
			}while (question() == 1);
			break;
	}

	std::cout << "\nCalc++ Terminated!\n";

}

int main()
{
    calculator();
	return 0;
}
