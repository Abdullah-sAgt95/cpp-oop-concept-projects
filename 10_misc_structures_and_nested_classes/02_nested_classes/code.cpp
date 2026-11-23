#include <iostream>

using namespace std;

class Person
{

    class Address
    {

    public:
        string addressLine1;
        string addressLine2;
        string city;
        string country;

        void print()
        {
            cout << "\nAddress:\n";
            cout << addressLine1 << endl;
            cout << addressLine2 << endl;
            cout << city << endl;
            cout << country << endl;
        }
    };

public:
    string fullName;
    Address address;

    Person()
    {
        fullName = "Gamal Viona";
        address.addressLine1 = "Building 12";
        address.addressLine2 = "st.Louis";
        address.city = "Hong Kong";
        address.country = "China";
    }
};

int main()
{

    Person person;

    person.address.print();

    return 0;
}
