#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

// pass operands as parameters
// the things on both sides of operator 
// its a good idea to pass objects by reference in case they are large
ostream& operator<<(ostream& output, Vehicle& vehicle)
{
    output << vehicle.getKMS();
    output << vehicle.getName() << endl;

    return output; // return ostream object reference
}

int main()
{
    Vehicle car1 = Vehicle("Audi", "saloon", "pink", 343);
    Vehicle car2 = Vehicle("BMW", "bat mobile", "dark grey", 8910);

    cout << car1;

    return 0;
}