#include <iostream>

using namespace std;

class ClassA
{

private:
    int _var1;

public:
    int var2;

    ClassA()
    {
        _var1 = 10;
        var2 = 20;
    }

protected:
    int var3 = 30;

    // Now "ClassB" can access all members(private, protected, public etc) in "ClassA"
    friend class ClassB;
};

class ClassB
{

public:
    void display(ClassA classA)
    {
        cout << "The value of var1 = " << classA._var1;
        cout << "\nThe value of var2 = " << classA.var2;
        cout << "\nThe value of var3 = " << classA.var3;
    }
};

int main()
{
    ClassA classA;
    ClassB classB;

    classB.display(classA);

    return 0;
}
