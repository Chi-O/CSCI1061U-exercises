#include <iostream>

using namespace std;

// an abstract class must have have a pure virtual function
class Vehicle
{
protected: // available to child classes only
    string name;
    int kms;

public:
    virtual void drive() = 0; // make it a pure virtual function
}; // Classes end with a semicolon

class Car : public Vehicle
{
public:
    void goToPicnic()
    {
        cout << "going to picnic \n";
    }
    virtual void drive() override // good practice to add 'virtual', 'override' keyword
    {
        cout << "Car can drive 🚗💨 \n";
    }
};

class Truck : public Vehicle
{
public:
    void carryGoods()
    {
        cout << "Carrying Goods" << endl;
    }
    virtual void drive() override // good practice to add 'virtual', 'override' keyword
    {
        cout << "Truck can drive 🚗💨 \n";
    }
};

int main()
{
    Car car;
    Truck truck;

    Vehicle *vehicle[2];
    vehicle[0] = &car;
    vehicle[1] = &truck;

    // initially the parent method drive() will always be called.
    // but what if we want to call a method of the child class?
    vehicle[0]->drive(); // use the parent pointer and call a method of the child class
    vehicle[1]->drive();

    return 0;

    return 0;
}