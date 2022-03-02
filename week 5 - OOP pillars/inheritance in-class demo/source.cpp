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

class SmartPhone : public Phone
{
public:
    void browseInternet()
    {
        cout << "I can browse Internet" << endl;
    }

    void makeCalls()
    {
        cout << "I can make calls from SmartPhone" << endl;
    }
};

class Android : public SmartPhone
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

    // multi-level inheritance
    // Android <- SmartPhone <- Phone
    // (child) <- (parent) <- (grandparent)
    android.IAmAndroid();
    android.makeCalls(); // it calls the function from the most immediate parent i.e. parent before grandparent
    android.browseInternet();
    return 0;
}