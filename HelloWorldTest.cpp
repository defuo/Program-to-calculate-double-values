#include <iostream>

double getDouble()
{
    std::cout << "Enter a double number: " << std::endl;
    double x;
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following characters: +, -, *, /" << std::endl;
    char symbol;
    std::cin >> symbol;
    return symbol;
}

void printResult(double x, char symbol, double y)
{
    if (symbol == '+')
        std::cout << x << " + " << y << " is " << x + y << std::endl;
    else if (symbol == '-')
        std::cout << x << " - " << y << " is " << x - y << std::endl;
    else if (symbol == '*')
        std::cout << x << " * " << y << " is " << x * y << std::endl;
    else if (symbol == '/')
        std::cout << x << " / " << y << " is " << x / y << std::endl;
}

int main()
{
    double x = getDouble();
    double y = getDouble();

    char symbol = getOperator();

    printResult(x, symbol, y);

    return 0;
}

