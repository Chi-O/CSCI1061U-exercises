#include "vehicle.h"
#include "anotherVehicle.h"

int main()
{
    galactic::Vehicle vehicle; // access classes
    vehicle.drive();
    galactic::globFunc(); // access global functions as well

    milkyWay::Vehicle v2;
    v2.startEngine();

    return 0;
}