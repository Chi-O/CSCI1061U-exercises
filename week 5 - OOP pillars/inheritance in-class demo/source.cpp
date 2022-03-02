#include <iostream>

using namespace std;

class Phone
{
public:
    void makeCalls()
    {
        cout << "I can make calls" << endl;
    }
};

class SmartPhone
{
public:
    void browseInternet()
    {
        cout << "I can browse Internet" << endl;
    }
};

class Android : public Phone, public SmartPhone // inheriting from two different classes
{
public:
    void IAmAndroid()
    {
        cout << "I am Android" << endl;
    }
};

int main()
{
    Android android;

    android.IAmAndroid();
    android.makeCalls();
    android.browseInternet();
    return 0;
}