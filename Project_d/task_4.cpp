#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int number = 29;
    if (isPrime(number))
        std::cout << number << " is a prime number";
    else
        std::cout << number << " is not a prime number";
    return 0;
}