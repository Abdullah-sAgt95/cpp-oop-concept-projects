#include <iostream>
#include <string>

using namespace std;

class Person
{

private:
    string _fullName;

    class Address
    {

    private:
        string _addressLine1;
        string _addressLine2;
        string _city;
        string _country;

    public:
        Address(string addressLine1, string addressLine2, string city, string country)
        {
            _addressLine1 = addressLine1;
            _addressLine2 = addressLine2;
            _city = city;
            _country = country;
        }

        void setAddressLine1(string addressLine1)
        {
            _addressLine1 = addressLine1;
        }

        string getAddressLine1()
        {
            return _addressLine1;
        }

        void setAddressLine2(string addressLine2)
        {
            _addressLine2 = addressLine2;
        }

        string getAddressLine2()
        {
            return _addressLine2;
        }

        void setCity(string city)
        {
            _city = city;
        }

        string getCity()
        {
            return _city;
        }

        void setCountry(string country)
        {
            _country = country;
        }

        string getCountry()
        {
            return _country;
        }

        void print()
        {
            cout << "\nAddress:\n";
            cout << getAddressLine1() << endl;
            cout << getAddressLine2() << endl;
            cout << getCity() << endl;
            cout << getCountry() << endl;
        }
    };

public:
    void setFullName(string fullName)
    {
        _fullName = fullName;
    }

    string getFullName()
    {
        return _fullName;
    }

    Address address = Address("", "", "", "");

    Person(string fullName, string addressLine1, string addressLine2, string city, string country)
    {
        _fullName = fullName;

        // initiate Address class by it's constructor
        address = Address(addressLine1, addressLine2, city, country);
    }
};

int main()
{

    Person person("Ronny Davids Qwari", "st.345", "RD.66", "Beijing", "China");

    person.address.print();

    return 0;
}