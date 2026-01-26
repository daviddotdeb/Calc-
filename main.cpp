#include <iostream>
#include <string>
#include <cmath>

int main()
{
	double n1, n2;
	int ques, decision, foraux, multi = 1;
	std::string op;

	std::cout << "\nWelcome to Calc++\n\n";
	

	std::cout << "How much numbers do you want?: \n1 - Just One\n2 - Two\n";
	std::cin >> decision;

	switch(decision)
	{
		case 1:
			do //case chose 1 do it
			{
				std::cout << "Your Number: ";
				std::cin >> n1;

				std::cout << "Operator(!): ";
				std::cin >> op;

				if (op == "!")
				{
					n2 = n1;
					std::cout << n2 << "!" << std::endl; //here i am simuling x! = x.x.x.x... = x
					for(foraux = 1; foraux <= n1; n1--)
					{
						std::cout << n2 << std::endl;
						multi *= n2;
						n2--;
					}
					std::cout << "=\n" << multi << std::endl;
				}
				else
				{
					std::cout << "\nIncorrect Operator\n\n";
				}

				std::cout << "\nMake Another Calc?\n";
				std::cout << "1 - Yes\n";
				std::cout << "2 - No\n";
				std::cin >> ques;

			}while (ques != 2);
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

				std::cout << "\nMake another calc?\n"; //i want to go to the start of the code and chose the quatity of numbers i will think more about it
				std::cout << "1 - Yes\n";
				std::cout << "2 - No\n";
				std::cin >> ques;

			}while (ques != 2);
			break;
	}

	std::cout << "\nCalc++ Terminated!\n";

	return 0;
}