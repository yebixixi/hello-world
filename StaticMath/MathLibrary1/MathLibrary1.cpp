// MathLibrary1.cpp
// compile with: cl /c /EHsc MathLibrary1.cpp
// post-build command: lib MathLibrary1.obj

#include "MathLibrary1.h"

namespace MathLibrary1
{
    double Arithmetic::Add(double a, double b)
    {
        return a + b;
    }

    double Arithmetic::Subtract(double a, double b)
    {
        return a - b;
    }

    double Arithmetic::Multiply(double a, double b)
    {
        return a * b;
    }

    double Arithmetic::Divide(double a, double b)
    {
        return a / b;
    }
}