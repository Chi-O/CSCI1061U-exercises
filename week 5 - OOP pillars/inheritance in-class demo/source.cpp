#include <iostream>

using namespace std;

// parent class vehicle
class Vehicle
{
private:
    int secret = 0; // cannot be accessed outside the class
protected:
    int anotherVariable = 10; // can only be accessed by the child variables
public:
    int someVariable = 7; // can be accessed by any other class

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
};

class Car: public Vehicle // child class
// all of the *public* methods become available
{
public:
    void goToPicnic()
    {
        cout << "Going to picnic\n";
    }

    Vehicle vehicle;
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

    cout << "Car Object..." << endl;
    car.drive();
    car.startEngine();
    car.stopEngine();
    car.goToPicnic();

    cout << "\n";

    cout << "Truck Object..." << endl;
    truck.drive();
    truck.startEngine();
    truck.stopEngine();
    truck.carryGoods();

    return 0;
}