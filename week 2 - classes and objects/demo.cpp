// in-class Class demonstration
// 26/01/2022

#include <iostream>

using namespace std;

class Vehicle
{
private: // access modifiers
    // properties .i.e. variables
    string name;
    string type;
    string color;
    int kms;

public:
    //constructor
    Vehicle(string n, string t, string c, int k)
    {
        name = n;
        type = t;
        color = c;
        kms = k;
    }

    Vehicle()
    {
        name = "Audi";
        type = "Cool";
        color = "Pink";
        kms = 702312;
    }

    // getter and setters
    void getKMS()
    {
        cout << kms << endl;
    }

    void setKMS(int k)
    {
        if (k >= 0)
        {
            kms = k;
        }
    }

    // actions .i.e. methods
    void carDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
        cout << "KMs: " << kms << endl;
        cout << endl;
    }

    void drive()
    {
        cout << "I can drive 🚗💨 \n"
             << endl;
    }

}; // Classes end with a semicolon

int main()
{
    // create an object of a class
    Vehicle car1 = Vehicle("Honda CRV", "Compact", "Orange", 39843);
    car1.drive();
    // car1.carDetails();
    car1.getKMS();
    car1.setKMS(56789);
    car1.getKMS();


    // Vehicle car2 = Vehicle();
    // car2.carDetails();

    return 0;
}