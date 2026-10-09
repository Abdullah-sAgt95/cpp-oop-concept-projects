#include <iostream>

using namespace std;

class Person
{
private:
    string _firstName;
    string _lastName;

public:
    // Setter: Modify the first name.
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    // Getter: Read the first name.
    string getFirstName()
    {
        return _firstName;
    }

    // Setter: Modify the last name.
    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    // Getter: Read the last name.
    string getLastName()
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

    cout << "First Name: " << person1.getFirstName() << endl;
    cout << "Last Name: " << person1.getLastName() << "\n";
    cout << "Full Name: " << person1.fullName() << "\n";

    return 0;
}
