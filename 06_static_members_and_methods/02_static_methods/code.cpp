#include <iostream>

using namespace std;

class ClassA
{

public:
    // shared among class, and can be called without creating an object.
    static int function1()
    {
        return 10;
    }

    int function2()
    {
        return 20;
    }
};

int main()
{

    // Static method: No object required.
    cout << ClassA::function1() << endl;

    // Non-static method: Object required.
    ClassA object1;
    cout << object1.function2() << endl;

    return 0;
}