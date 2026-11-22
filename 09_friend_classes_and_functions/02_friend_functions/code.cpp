#include <iostream>

using namespace std;

class ClassA
{

private:
    int _var1;

protected:
    int var3;

public:
    int var2;

    ClassA()
    {
        _var1 = 10;
        var2 = 20;
        var3 = 30;
    }

    friend int mySum(ClassA classA);
};

int mySum(ClassA classA)
{
    return classA._var1 + classA.var2 + classA.var3;
}

int main()
{
    ClassA classA;

    cout << mySum(classA) << endl;

    return 0;
}
