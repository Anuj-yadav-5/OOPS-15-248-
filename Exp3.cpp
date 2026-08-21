#include <iostream>
using namespace std;

// Inline function for addition
inline int add(int a, int b)
{
    return a + b;
}

// Function with default arguments for subtraction
int subtract(int a, int b = 5)
{
    return a - b;
}

// Function overloading for multiplication
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

// Function overloading for division
int divide(int a, int b)
{
    return a / b;
}

double divide(double a, double b)
{
    return a / b;
}

int main()
{
    int a = 20, b = 10;

    cout << "Addition: " << add(a, b) << endl;

    // Using default argument
    cout << "Subtraction (default b = 5): "
         << subtract(a) << endl;

    cout << "Subtraction: "
         << subtract(a, b) << endl;

    // Function overloading
    cout << "Integer Multiplication: "
         << multiply(a, b) << endl;

    cout << "Floating-point Multiplication: "
         << multiply(5.5, 2.0) << endl;

    cout << "Integer Division: "
         << divide(a, b) << endl;

    cout << "Floating-point Division: "
         << divide(20.0, 3.0) << endl;

    return 0;
}