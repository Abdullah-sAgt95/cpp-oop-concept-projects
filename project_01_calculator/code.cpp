#include <iostream>
#include <string>

using namespace std;

class Calculator
{

private:
    float _result = 0;
    float _trackingNumber = 0;
    string _trackingOperation = "Clear";

    bool isZero(float number) const
    {
        return (number == 0);
    }

public:
    float add(float number)
    {
        _trackingNumber = number;
        _trackingOperation = "Adding";
        return _result += number;
    }

    float subtract(float number)
    {
        _trackingNumber = number;
        _trackingOperation = "Subtracting";
        return _result -= number;
    }

    float multiply(float number)
    {
        _trackingNumber = number;
        _trackingOperation = "Multiplying";
        return _result *= number;
    }

    float divide(float number)
    {

        _trackingOperation = "Dividing";

        if (isZero(number))
        {
            number = 1;
        }

        _trackingNumber = number;
        return _result /= number;
    }

    void clear()
    {
        _result = 0;
        _trackingNumber = _result;
        _trackingOperation = "Clear";
    }

    void printResult() const
    {
        cout << "Result After " << _trackingOperation << " " << _trackingNumber << " is: " << _result << endl;
    }
};

int main()
{

    Calculator calculator;

    calculator.clear();

    calculator.add(10);
    calculator.printResult();

    calculator.add(100);
    calculator.printResult();

    calculator.subtract(20);
    calculator.printResult();

    calculator.divide(0);
    calculator.printResult();

    calculator.divide(2);
    calculator.printResult();

    calculator.multiply(3);
    calculator.printResult();

    calculator.clear();
    calculator.printResult();

    return 0;
}
