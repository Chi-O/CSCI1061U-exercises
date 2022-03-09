#include <iostream>

using namespace std;

// parent class vehicle
class Vehicle
{
protected:
    int KMs = 0;
public:
    void drive()
    {
        cout << "I am driving\n";
    }
    void startEngine()
    {
        cout << "Engine started\n";
    }
    void stopEngine()
    {
        cout << "Engine stopped\n";
    }
    void setKMs(int KMs) 
    {
        this->KMs = KMs;
    }
};

class Car: public Vehicle // child class
{
public:
    void goToPicnic()
    {
        cout << "Going to picnic\n";
    }
    void showKMs()
    {
        cout << "I am a car and this is my KMs " << KMs << "\n";
    }
};

class Truck: public Vehicle
{
public:
    void carryGoods()
    {
        cout << "Carrying goods\n";
    }
};

int main()
{
    Car car;
    Truck truck;
    Vehicle vehicle;

    // // quick revision: a pointer can point to a pointer of it's own type
    // parent cannot access any of it's child methods
    // Car* ptrCar;
    // ptrCar = &car;

    Vehicle* ptrVehicle;
    ptrVehicle = &vehicle;

    return 0;
}