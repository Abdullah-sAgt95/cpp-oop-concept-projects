#include <iostream>

using namespace std;

// Abstract class / Interface / like contract.
class Mobile
{

public:
    virtual void dial(string phoneNumber) = 0;
    virtual void sendSMS(string phoneNumber, string text) = 0;
    virtual void takePicture() = 0;
};

class Iphone : public Mobile
{

public:
    void dial(string phoneNumber)
    {
    }

    void sendSMS(string phoneNumber, string text)
    {
    }

    void takePicture()
    {
    }
};

int main()
{

    return 0;
}
