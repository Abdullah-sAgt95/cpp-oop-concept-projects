#include <iostream>
#include <string>

using namespace std;

class Person
{

private:
    string _firstName;

public:
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    string getFirstName()
    {
        return _firstName;
    }

    __declspec(property(get = getFirstName, put = setFirstName)) string firstName;
};

int main()
{

    Person person1;

    person1.setFirstName("Paolo");
    cout << person1.getFirstName() << endl;

    // instead of the above we only write this.
    person1.firstName = "Nesta";
    cout << person1.firstName << endl;

    return 0;
}
