#include <iostream>

using namespace std;


class Person
{
private:
	int x;

public:
	string firstName;
	string lastName;

	string fullName() {

		return firstName + " " + lastName;

	}

};


int main()
{

	Person person1;

	person1.firstName = "Mohammed";
	person1.lastName = "Fadi";


	cout << person1.fullName() << endl;



	return 0;

}