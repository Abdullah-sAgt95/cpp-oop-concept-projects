#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

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
