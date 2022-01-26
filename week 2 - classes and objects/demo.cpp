// in-class Class demonstration
// 26/01/2022

#include <iostream>

using namespace std;

class Vehicle
{
    public: // access modifiers

    // properties .i.e. variables
    string name;
    string type;
    string color;
    int kms;

    // actions .i.e. methods
    void carDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
        cout << "KMs: " << kms << endl;
    }
    void drive()
    {
        cout << "I can drive" << endl;
    }

}; // Classes end with a semicolon

int main()
{
    // create an object of a class
    Vehicle car1;
    car1.kms = 50000;
    car1.name = "Honda Civic";
    car1.type = "Compact Car";
    car1.color = "Space Grey";

    car1.drive();
    car1.carDetails();

    return 0;
}