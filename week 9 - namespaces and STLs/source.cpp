// including both header files
#include "vehicle.h"
#include "anotherVehicle.h" // the compiler chooses the one that was included last

int main()
{
    Vehicle vehicle;
    vehicle.startEngine();
    vehicle.drive(); // error here

    return 0;
}