#include <iostream>
using namespace std;
#include <exception>

class MathException : public exception
{
private:
    string message;

public:
    MathException(string m ="Unidentified Math Error")
    {
        message = m;
    }
    const char* what() const noexcept override { return message.c_str(); }
};
class DivideByZeroException : public MathException
{
public:
    DivideByZeroException() : MathException("division by zero") {}
};

class OverflowException : public MathException
{
public:
    OverflowException() : MathException("Overflow detected") {}
};

class RootOfNegativeException : public MathException
{
public:
    RootOfNegativeException() : MathException("Root of Negative") {}
};
