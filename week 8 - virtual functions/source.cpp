#include <iostream>

using namespace std;

class Vehicle
{
protected: // available to child classes only
    string name;
    int kms;

public:
    Vehicle(){
        cout << "default Vehicle constructor \n";
    }
    // constructor
    Vehicle(string name, int kms)
    {
        this->name = name;
        this->kms = kms;
        cout << "parameterized Vehicle constructor \n";
    }
    void drive()
    {
        cout << "I can drive 🚗💨 \n";
    }

    ~Vehicle()
    {
        cout << "default Vehicle destructor \n";
    }

}; // Classes end with a semicolon

class Car : public Vehicle
{
public:
    // constructor
    Car(string name, int kms)
    { // by default, child class automatically calls default constructor of parent class
        this->name = name;
        this->kms = kms;
        cout << "parameterized Car constructor \n";
    }

    void goToPicnic()
    {
        cout << "going to picnic \n";
    }

    ~Car() // child destructor is called before the parent destructor
    {
        cout << " default Car destructor \n";
    }
};

int main()
{
    Car car = Car("Toyota", 123);
    Car car2 = Car("Ford", 456);
    
    // parent destructor will only be called after all the child objects have been destroyed
    return 0;
}