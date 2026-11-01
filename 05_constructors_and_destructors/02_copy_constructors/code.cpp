#include <iostream>
#include <string>

using namespace std;

class Address
{

private:
    string _addressLine1;
    string _addressLine2;
    string _poBox;
    string _zipCode;

public:
    Address(string addressLine1, string addressLine2, string poBox, string zipCode)
    {
        _addressLine1 = addressLine1;
        _addressLine2 = addressLine2;
        _poBox = poBox;
        _zipCode = zipCode;
    }

    // Copy constructor.
    Address(Address &oldObject)
    {
        _addressLine1 = oldObject.getAddressLine1();
        _addressLine2 = oldObject.getAddressLine2();
        _poBox = oldObject.getPoBox();
        _zipCode = oldObject.getZipCode();
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

    void setPoBox(string poBox)
    {
        _poBox = poBox;
    }

    string getPoBox()
    {
        return _poBox;
    }

    void setZipCode(string zipCode)
    {
        _zipCode = zipCode;
    }

    string getZipCode()
    {
        return _zipCode;
    }

    void print()
    {
        cout << "\nAddress Details:\n";
        cout << "-----------------------------";
        cout << "\nAddress Line 1: " << _addressLine1 << endl;
        cout << "Address Line 2: " << _addressLine2 << endl;
        cout << "P.O.Box       : " << _poBox << endl;
        cout << "Zip Code      : " << _zipCode << endl;
    }
};

int main()
{

    Address addressLine("1 St Peter's Square", "Manchester City Centre", "PO Box 9564", "M1 1AA");
    addressLine.print();

    cout << "\n___________________________\n";

    Address addressLine2(addressLine);
    addressLine2.print();
}
