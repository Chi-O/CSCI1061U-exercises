// including both header files
#include "vehicle.h"
#include "anotherVehicle.h" // the compiler chooses the one that was included last

int main()
{
    galactic::Vehicle vehicle;
    vehicle.drive();

    milkyWay::Vehicle v2;
    v2.startEngine();

    return 0;
}