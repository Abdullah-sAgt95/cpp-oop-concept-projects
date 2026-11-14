#include <iostream>

using namespace std;

class ClassA
{

private:
    // only accessible inside this class, neither derived classes nor outside class.
    int _var1 = 10;
    void _function1()
    {
        cout << "Function 1 Private\n";
    }

protected:
    // only accessible inside this class and all derived classes, but not outside class.
    int var2 = 30;
    void function2()
    {
        cout << "Function 2 Protected\n";
    }

public:
    // Accessible inside this class, all derived classes, and outside class.
    int var3 = 50;
    void function3()
    {
        cout << "Function 3 Public\n";
    }
};

class ClassB : public ClassA
{
    // Here you can access "Protected" members.
public:
    void function4()
    {
        cout << ClassA::var2 << endl;
        ClassA::function2();
    }
};

int main()
{

    /*ClassA a;
    a.var3 = 5;
    a.function3();*/

    ClassB b;
    b.function4();

    return 0;
}
