#include <iostream>
#include <string>

using namespace std;

class Employee
{

public:
    int id;
    string name;
    float salary;

    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void func1(Employee employee)
    {
        employee.print();
    }

    void func2()
    {
        func1(*this);
    }

    void print()
    {
        cout << id << " " << name << " " << salary << endl;
        // cout << this->id << " " << this->name << " " << this->salary << endl;
    }
};

int main()
{

    Employee employee(10, "Fadi", 60000);

    employee.print();

    employee.func2();

    return 0;
}