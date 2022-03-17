#include <iostream>

using namespace std;

class Phone
{
protected:
    int speed;

public:
    Phone()
    {
        speed = 0;
        cout << "Default Phone constructor \n";
    }

    Phone(int speed)
    {
        this->speed = speed;
        cout << "Phone parameterized constructor called \n";
    }

    void makeCalls()
    {
        cout << "I can make calls with speed: " << speed << endl;
    }
};

class SmartPhone
{
protected:
    int Wifi;

public:
    SmartPhone()
    {
        cout << "Default SmartPhone constructor \n";
    }

    SmartPhone(int Wifi)
    {
        this->Wifi = Wifi;
        cout << "SmartPhone parameterized constructor called \n";
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

    // parameterized constructor calls parent constructors
    Android(int speed, int WiFi) : Phone(speed), SmartPhone(WiFi)
    {
        this->speed = speed;
        this->Wifi = WiFi;

        cout << "Android parameterized constructor called \n";
    }

    void iAmAndroid()
    {
        cout << "I am android \n";
    }
};

int main()
{

    cout << "Default Calls \n";
    Android andy; // shorthand to call default constructor
    andy.iAmAndroid();
    andy.makeCalls();
    andy.browserInternet();

    cout << "\nParametrized Calls \n";
    Android a2 = Android(5000, 60);
    a2.iAmAndroid();
    a2.makeCalls();
    a2.browserInternet();

    return 0;
}