#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{

    Employee employee(10, "Fadi", "Davids", "Da@gmail.com", "0920590235", "Software Developer", "Computer Science", 55000);

    employee.print();

    return 0;
}
