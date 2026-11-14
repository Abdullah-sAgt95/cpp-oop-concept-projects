#include <iostream>

using namespace std;

class ClassA
{

private:
    int v1;
    int function1()
    {
        return 1;
    }

protected:
    int v2;
    int function2()
    {
        return 2;
    }

public:
    int v3;
    int function3()
    {
        return 3;
    }
};

class ClassB : ClassA
{

public:
    int function4()
    {
        return 4;
    }
};

int main()
{

    return 0;
}
