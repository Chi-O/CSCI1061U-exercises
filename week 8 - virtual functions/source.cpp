#include <iostream>

using namespace std;

class Vehicle
{
private: // access modifiers
    // properties .i.e. variables
    int* sensors;

public:
    //constructor
    Vehicle()
    {
        cout << "default constructor \n";
    }

    void drive()
    {
        cout << "I can drive 🚗💨 \n";
    }

    ~Vehicle()
    {
        cout << "default destructor \n";
    }

}; // Classes end with a semicolon

int main()
{
    Vehicle vehicle;
    vehicle.drive();
    // destructor is automatically called whenever an object is destroyed
    return 0;
}