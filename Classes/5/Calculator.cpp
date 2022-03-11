#include <iostream>
#include "Calculator.h"
using namespace std;

// TODO: Define default constructor
		
// TODO: Define member functions - 
//       Add(), Subtract(), Multiply(), Divide(), Clear(), GetValue()

Calculator::Calculator()
{
    data = 0.0;
}

void Calculator::Add(double n)
{
    data += n;
}

void Calculator::Subtract(double n)
{
    data -= n;
}
void Calculator::Multiply(double n)
{
    data *= n;
}
void Calculator::Divide(double n)
{
    data /= n;
}

void Calculator::Clear()
{
    data = 0.0;
}

double Calculator::GetValue()
{
    return data;
}