#include <iostream>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int number = 5;
    std::cout << "Factorial of " << number << " = " << factorial(number);
    return 0;
}