// in-class Class demonstration
// 26/01/2022

#include "vehicle.h" // access header file

int main()
{
    // create an object of a class
    Vehicle car1 = Vehicle("Honda CRV", "Compact", "Orange", 39843);
    car1.drive();
    // car1.carDetails();
    car1.getKMS();
    car1.setKMS(56789);
    car1.getKMS();

    // Vehicle car2 = Vehicle();
    // car2.carDetails();

    return 0;
}