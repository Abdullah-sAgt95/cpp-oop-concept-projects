#include <iostream>

using namespace std;

class Person
{

    struct stAddress
    {
        string addressLine1;
        string addressLine2;
        string city;
        string country;
    };

public:
    string fullName;
    stAddress address;

    Person()
    {
        fullName = "Gamal Viona";
        address.addressLine1 = "Building 12";
        address.addressLine2 = "st.Louis";
        address.city = "Hong Kong";
        address.country = "China";
    }

    void print()
    {
        cout << "\nAddress:\n";
        cout << address.addressLine1 << endl;
        cout << address.addressLine2 << endl;
        cout << address.city << endl;
        cout << address.country << endl;
    }
};

int main()
{

    Person person;

    person.print();

    return 0;
}
