#include <iostream>

using namespace std;

class Person
{

public:
    virtual void print()
    {
        cout << "Hi, I'm Person." << endl;
    }
};

class Employee : public Person
{

public:
    void print()
    {
        cout << "Hi, I'm Employee." << endl;
    }
};

class Student : public Person
{

public:
    void print()
    {
        cout << "Hi, I'm Student." << endl;
    }
};

int main()
{

    Employee employee;
    Student student;

    Person *ptrPerson1 = &employee;
    Person *ptrPerson2 = &student;

    ptrPerson1->print();
    ptrPerson2->print();

    return 0;
}
