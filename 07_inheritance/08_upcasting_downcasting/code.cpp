#include <iostream>

using namespace std;

class Person
{

public:
    string fullName = "Dony Ronny";
};

class Employee : public Person
{

public:
    string title = "CEO";
};

int main()
{

    Employee employee;

    // up casting
    Person *ptrPerson = &employee;

    cout << ptrPerson->fullName << endl;

    Person person;

    // down casting will cause error in this situation.
    //  Employee* ptrEmployee = &person;
    //  cout << ptrEmployee->fullName;

    return 0;
}
