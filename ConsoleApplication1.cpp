#include <iostream>
#include "Helpers.h"
#include <math.h>

int main()
{
    int a, b;
    std::cout << "Enter first number ";
    std::cin >> a;

    std::cout << "Enter second number ";
    std::cin >> b;

    std::cout << "The square of the sum = " << sum(a, b);
    return 0;
}