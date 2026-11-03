#include <iostream>
#include <string>

using namespace std;

class Person
{

private:
    int _id;
    string _firstName;
    string _lastName;
    string _email;
    string _phone;

public:
    Person(int id, string firstName, string lastName, string email, string phone)
    {
        _id = id;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    // read only Property
    int getId()
    {
        return _id;
    }

    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    string getFirstName()
    {
        return _firstName;
    }

    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    string getLastName()
    {
        return _lastName;
    }

    void setEmail(string email)
    {
        _email = email;
    }

    string getEmail()
    {
        return _email;
    }

    void setPhone(string phone)
    {
        _phone = phone;
    }

    string getPhone()
    {
        return _phone;
    }

    string getFullName()
    {
        return getFirstName() + " " + getLastName();
    }

    void sendEmail(string subject, string body)
    {
        cout << "\nThe following message sent successfully to email: " << getEmail();
        cout << "\nSubject: " << subject;
        cout << "\nBody: " << body << endl;
    }

    void sendSMS(string message)
    {
        cout << "\nThe following SMS sent successfully to phone: " << getPhone();
        cout << "\n"
             << message << endl;
    }

    void print()
    {
        cout << "\nInfo\n";
        cout << "____________________________\n";
        cout << "ID       : " << getId() << endl;
        cout << "FirstName: " << getFirstName() << "\n";
        cout << "lastName : " << getLastName() << "\n";
        cout << "FullName : " << getFullName() << "\n";
        cout << "Email    : " << getEmail() << "\n";
        cout << "Phone    : " << getPhone() << endl;
        cout << "____________________________\n";
    }
};

int main()
{

    Person person1(10, "Sany", "David", "Da@gmail.com", "990237727");
    person1.print();

    person1.sendEmail("Hi", "How are you?");
    person1.sendSMS("How are you?");

    return 0;
}
