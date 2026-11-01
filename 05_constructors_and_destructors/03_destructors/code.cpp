#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
    string fullName;

    // This is Cnstructor will be called when object is built.
    Person()
    {
        fullName = "Ali Mousa";
        cout << "\nHi, I'm Constructor";
    }

    // This is destructor will be called when object is destroyed.
    ~Person()
    {
        cout << "\nHi, I'm Destructor";
    }
};

void fun1()
{
    Person person1;
}

void fun2()
{
    Person *person2 = new Person;

    delete person2;
}

int main()
{

    // Person person1;

    cout << "--- Automatic Object ---\n";
    fun1();

    cout << "\n--- Dynamic Object ---\n";
    fun2();

    return 0;
}
