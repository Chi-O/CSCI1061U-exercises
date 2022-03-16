#include <iostream>

using namespace std;

class Phone
{
protected:
    int speed;

public:
    Phone()
    {
        cout << "default Phone constructor \n";
    }
    
    Phone (int speed)
    {
        this->speed = speed;
    }

    void makeCalls()
    {
        cout << "I can make calls \n";
    }
};

class SmartPhone
{
public:
    SmartPhone()
    {
        "Default Smart Phone constructor \n";
    }
    void browserInternet()
    {
        cout << "I can browse internet \n";
    }
};

class Android : public Phone, public SmartPhone
{
public:
    Android()
    {
        cout << "Default Android constructor \n";
    }
    void iAmAndroid()
    {
        cout << "I am android \n";
    }
};

int main()
{
    Android andy = Android();
    andy.iAmAndroid();
    return 0;
}