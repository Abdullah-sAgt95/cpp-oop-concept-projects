#include <iostream>
#include <string>

using namespace std;

class Person
{

private:
    int _id = 10;
    string _firstName;
    string _lastName;

public:
    // Property Get, this is read ONLY property. we don't have "set" property
    int getId() const
    {
        return _id;
    }

    // Property set
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    // Property get
    string getFirstName() const
    {
        return _firstName;
    }

    // Property set
    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    // Property get
    string getLastName() const
    {
        return _lastName;
    }

    string fullName()
    {
        return _firstName + " " + _lastName;
    }
};

int main()
{

    Person person1;

    person1.setFirstName("Mahr");
    person1.setLastName("Yousef");

    cout << "Id: " << person1.getId() << endl;
    cout << "First Name: " << person1.getFirstName() << endl;
    cout << "Last Name: " << person1.getLastName() << "\n";
    cout << "Full Name: " << person1.fullName() << "\n";

    return 0;
}