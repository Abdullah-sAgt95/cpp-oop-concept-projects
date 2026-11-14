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

    // Static-Early Binding [Compile time]
    employee.print();
    student.print();

    Person *ptrPerson1 = &employee;
    Person *ptrPerson2 = &student;

    // Dynamic-Late Binding [Run time]
    ptrPerson1->print();
    ptrPerson2->print();

    return 0;
}