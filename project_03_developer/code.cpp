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

class Employee : public Person
{

private:
    string _title;
    string _department;
    float _salary;

public:
    Employee(int id, string firstName, string lastName, string email, string phone, string title, string department, float salary)
        : Person(id, firstName, lastName, email, phone)
    {
        _title = title;
        _department = department;
        _salary = salary;
    }

    void setTitle(string title)
    {
        _title = title;
    }

    string getTitle()
    {
        return _title;
    }

    void setDepartment(string department)
    {
        _department = department;
    }

    string getDepartment()
    {
        return _department;
    }

    void setSalary(float salary)
    {
        _salary = salary;
    }

    float getSalary()
    {
        return _salary;
    }

    // override print() method
    void print()
    {
        cout << "\nInfo\n";
        cout << "____________________________\n";
        cout << "ID        : " << getId() << endl;
        cout << "FirstName : " << getFirstName() << "\n";
        cout << "lastName  : " << getLastName() << "\n";
        cout << "FullName  : " << getFullName() << "\n";
        cout << "Email     : " << getEmail() << "\n";
        cout << "Phone     : " << getPhone() << endl;
        cout << "Title     : " << getTitle() << "\n";
        cout << "Department: " << getDepartment() << "\n";
        cout << "Salary    : " << getSalary() << endl;
        cout << "____________________________\n";
    }
};

class Developer : public Employee
{
private:
    string _mainProgrammingLanguage = "";

public:
    Developer(int id, string firstName, string lastName, string email, string phone, string title, string department, float salary, string mainProgrammingLanguage)
        : Employee(id, firstName, lastName, email, phone, title, department, salary)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    void setMainProgrammingLanguage(string programmingLanguage)
    {
        _mainProgrammingLanguage = programmingLanguage;
    }

    string getMainProgrammingLanguage()
    {
        return _mainProgrammingLanguage;
    }

    // override print() method
    void print()
    {
        cout << "\nInfo\n";
        cout << "_____________________________________\n";
        cout << "ID                       : " << getId() << endl;
        cout << "FirstName                : " << getFirstName() << "\n";
        cout << "lastName                 : " << getLastName() << "\n";
        cout << "FullName                 : " << getFullName() << "\n";
        cout << "Email                    : " << getEmail() << "\n";
        cout << "Phone                    : " << getPhone() << endl;
        cout << "Title                    : " << getTitle() << "\n";
        cout << "Department               : " << getDepartment() << "\n";
        cout << "Salary                   : " << getSalary() << endl;
        cout << "Main Programming Language: " << getMainProgrammingLanguage() << endl;
        cout << "_____________________________________\n";
    }
};

int main()
{

    Developer developer(10, "Fadi", "Davids", "Da@gmail.com", "0920590235", "Software Developer", "Computer Science", 55000, "C++");

    developer.print();

    return 0;
}
