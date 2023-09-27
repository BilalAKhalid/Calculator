#pragma once
#include <iostream>
#include <cmath>
using namespace std;

int getInput(const string& prompt)
{
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

int absoluteValue(int number)
{
    return abs(number);
}

int Add()
{
    int one = getInput("\nEnter the first number: ");
    int two = getInput("\nEnter the second number: ");
    return one + two;
}

int Subtract()
{
    int one = getInput("\nEnter the first number: ");
    int two = getInput("\nEnter the second number: ");
    return one - two;
}

int Multiply()
{
    int one = getInput("\nEnter the first number: ");
    int two = getInput("\nEnter the second number: ");
    return one * two;
}

int Divide()
{
    int one = getInput("\nEnter the dividend: ");
    int two = getInput("\nEnter the divisor (non-zero): ");
    if (two == 0)
    {
        cout << "\nError: Division by zero is not allowed.\n" << endl;
        return 0;
    }
    return one / two;
}

int Exponent()
{
    int base = getInput("\nEnter the base: ");
    int exponent = getInput("\nEnter the exponent: ");

    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int Factorial()
{
    int number = getInput("\nEnter a non-negative integer: ");

    if (number < 0)
    {
        cout << "\nError: Factorial is undefined for negative numbers.\n" << endl;
        return -1;
    }

    int result = 1;
    for (int i = 2; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

int AddInv()
{
    int number = getInput("\nEnter a number: ");
    return -number;
}

double MultInv()
{
    double number = getInput("\nEnter a non-zero number: ");

    if (number == 0)
    {
        cout << "\nError: Cannot calculate the multiplicative inverse of 0.\n" << endl;
        return 0.0;
    }

    return 1.0 / number;
}

double function(char type, bool& correct)
{
	switch (type)
	{
	case '+':
		correct = true;
		return Add();
	case '-':
		correct = true;
		return Subtract();
	case '*':
		correct = true;
		return Multiply();
	case '/':
		correct = true;
		return Divide();
	case '^':
		correct = true;
		return Exponent();
	case '!':
		correct = true;
		return Factorial();
	case 'A': // Additive Inverse
		correct = true;
		return AddInv();
	case 'M': // Multiplicative Inverse
		correct = true;
		return MultInv();
	default:
		correct = false;
	}
}

void display(int lastResult)
{
    cout << "Last result: " << lastResult << endl;
    cout << "\nChoose a mathematical operation:\n" << endl;
    cout << "+ for Addition, - for Subtraction, * for Multiplication, / for Division\n" << endl;
    cout << "^ for Exponent, ! for Factorial, A for Additive Inverse, M for Multiplicative Inverse\n" << endl;
    cout << "Enter 'Q' to quit.\n" << endl;
}