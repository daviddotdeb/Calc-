#include <iostream>

int one_number()
{
    int num;

    std::cout << "\nWrite a number: ";
    std::cin >> num;

    return num;
}

int two_numbers()
{
    int num2;

    std::cout << "\nWrite a number: ";
    std::cin >> num2;

    return num2;
}

void factorial()
{   
    long long aux, multi = 1, val = one_number();

    aux = val;

    std::cout << val << "!\n";

    for(int i = 1; i <= val; i++)
    {
        std::cout << aux << std::endl;
        multi *= aux;
        aux--;
    }
    std::cout << "=\n" << multi << std::endl;
}

void prime()
{
    int val = one_number();
    bool prime = true;

    if (val <= 1)
    {
        prime = false;
    }

    for(int i = 2; i < val; i++)
    {
        if(val % i == 0)
        {
            prime = false;
            break;
        }   
    }

    if (prime)
    {
        std::cout << val << " e um numero primo\n";
    }
    else
    {
        std::cout << val << " nao e um numero primo\n";
    }


}

void perfect()
{
    int aux = 0, val = one_number();

    for(int i = 1; i < val; i++)
    {
        if(val % i == 0)
        {
            aux += i;
        }
    }
    if (aux == val)
    {
        std::cout << val << " is a perfect number\n";
    }
    else
    {
        std::cout << val << " is not a perfect number\n";
    }
}

void even_odd()
{
    int val = one_number();

    if (val % 2 == 0)
    {
        std::cout << val << " is even\n";
    }
    else
    {
        std::cout << val << " is odd\n";
    }
}

//dois valores

void sum()
{
    double n1 = one_number(), n2 = two_numbers();

    std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
}

void sub()
{
    double n1 = one_number(), n2 = two_numbers();

    std::cout << n1 << " - " << n2 << " = " << n1 - n2;
}

void multi()
{
    double n1 = one_number(), n2 = two_numbers();

    std::cout << n1 << " x " << n2 << " = " << n1 * n2 << std::endl;
}

void div()
{
    double n1, n2;

    do
    {
        n1 = one_number();
        n2 = two_numbers();

        if (n2 == 0)
        {
            std::cout << " divisor cannot be zero!\n";
        }
        else
        {
        std::cout << n1 << " ÷ " << n2 << " = " << n1 / n2 << std::endl;
        }
    }while(n2 == 0);
}

void expo()
{
    int n1 = one_number(), n2 = two_numbers(), multi = 1;

    for (int i = 1; i <= n2; i++)
    {
        multi *= n1;
    }

    std::cout << n1 << " ^ " << n2 << " = " << multi << std::endl;
}

void case_one()
{
    std::string op;
    
    std::cout << "\nChose an operator\n";
    std::cout << "!(Factorial), P(Prime), C(Perfect), I(Even or Odd)\n\n";
    std::cin >> op;

    if (op == "!")
    {
        factorial();
    }
    else if (op == "P" || op == "p")
    {
        prime();
    }
    else if (op == "C" || op == "c")
    {
        perfect();
    }
    else if (op == "I" || op == "i")
    {
        even_odd();
    }
    else
    {
        std::cout << "\nInvalid Operator\n";
    }
}

void case_two()
{
    std::string op;

    std::cout << "\nChose an Operator\n";
    std::cout << "+, -, x, ÷, ^\n\n";
    std::cin >> op;

    if (op == "+")
    {
        sum();
    }
    else if (op == "-")
    {
        sub();
    }
    else if (op == "x" || op == "X" || op == "*" || op == ".")
    {
        multi();
    }
    else if (op == "÷" || op == "/")
    {
        div();
    }
    else if (op == "^" || op == "**")
    {
        expo();
    }
    else
    {
        std::cout << "\nInvalid Operator\n";
    }
}

void calc()
{
    int quest;
    std::cout << "How much numbers?\n";
    std::cout << "1 - one number\n";
    std::cout << "2 - two numbers\n\n";
    std::cin >> quest;

    switch(quest)
    {
        case 1:   
            case_one();
            break;

        case 2:
            case_two();
            break;

        default:
            std::cout << "\nInvalid Value\n\n";
    }
}

int main()
{
    std::string final_quest;

    std::cout << "Welcome to Calc++\n\n";
    do
    {
        calc();

        std::cout << "\n\none more calculation?(y/N): ";
        std::cin >> final_quest;
    }while(final_quest == "y" || final_quest == "Y" || final_quest == "yes" || final_quest == "Yes");

    std::cout << "\n\nCalc++ end...\n\n";

    return 0;
}