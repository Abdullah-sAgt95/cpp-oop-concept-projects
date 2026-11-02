#include <iostream>
#include <string>

using namespace std;

class ClassA
{

public:
    int var;

    // shared among the class
    static int counter;

    ClassA()
    {
        var = 0;
        counter++;
    }

    void print()
    {
        cout << "\nvar      = " << var << endl;
        cout << "counter  = " << counter << endl;
    }
};

// Define and initialize the static member outside the class
int ClassA::counter = 0;

int main()
{

    ClassA object1, object2, object3;

    object1.var = 10;
    object2.var = 20;
    object3.var = 30;

    object1.print();
    object2.print();
    object3.print();

    object1.counter = 500;
    cout << "\nAfter changing the static member counter in any object:\n";

    object1.print();
    object2.print();
    object3.print();

    return 0;
}
