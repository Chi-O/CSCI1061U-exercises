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
        sensors = new int[25]; // create an array of 25 integers in the heap memory
        cout << "default constructor \n";
    }

    void drive()
    {
        cout << "I can drive 🚗💨 \n";
    }

    ~Vehicle()
    {
        // you can deallocate memory here in the destructor
        delete[] sensors;
        // avoid dangling pointer
        sensors = nullptr;
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