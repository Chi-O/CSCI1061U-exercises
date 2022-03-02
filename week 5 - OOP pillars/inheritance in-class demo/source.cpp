#include <iostream>

using namespace std;

class Car
{
public:
    void drive() {
        cout << "I am driving\n";
    }
    void startEngine() {
        cout << "Engine started\n";
    }
    void stopEngine() {
        cout << "Engine stopped\n";
    }
    void goToPicnic() {
        cout << "Going to picnic\n";
    }

};

class Truck
{
public:
    void drive() {
        cout << "I am driving\n";
    }
    void startEngine() {
        cout << "Engine started\n";
    }
    void stopEngine() {
        cout << "Engine stopped\n";
    }
    void carryGoods() {
        cout << "Carrying goods\n";
    }

};


int main()
{
    return 0;
}