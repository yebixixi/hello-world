// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary1.lib

#include <iostream>
#include "MathLibrary1.h"

int main()
{
    double a = 7.4;
    int b = 99;

    std::cout << "a + b = " <<
        MathLibrary1::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        MathLibrary1::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        MathLibrary1::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        MathLibrary1::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}
