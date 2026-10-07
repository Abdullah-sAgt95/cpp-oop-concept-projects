#include <iostream>

using namespace std;

class AccessModifiers
{

private:
    // Accessible only inside this class.
    int variable1 = 5;

    int function1()
    {
        return 40;
    }

protected:
    // Accessible inside this class and derived classes.
    int variable2 = 100;

    int function2()
    {
        return 50;
    }

public:
    // Accessible from inside and outside the class.
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }

    float function3()
    {
        return function1() + variable1 * variable2;
    }
};

int main()
{
    AccessModifiers modifiers;

    modifiers.firstName = "Ali";
    modifiers.lastName = "Pina";

    return 0;
}