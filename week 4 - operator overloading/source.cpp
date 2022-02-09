#include <iostream>
#include <string>
#include "collections.h"

using namespace std;

// non-member function; written outside of a class
// pass operands as parameters
// the things on both sides of operator 
// its a good idea to pass objects by reference in case they are large
ostream& operator<<(ostream& output, Vehicle& vehicle)
{
    output << vehicle.getKMS();
    output << vehicle.getName() << endl;

    return output; // return ostream object reference
}

ostream& operator<<(ostream& output, Collections& collection)
{
    for (int i = 0; i < collection.getV().size(); i++)
    {
        output << collection.getV()[i].getKMS();
        output << collection.getV()[i].getName() << endl;
    }
    
    return output; // return ostream object reference
}

int main()
{
    Vehicle car1 = Vehicle("Audi", "saloon", "pink", 343);
    Vehicle car2 = Vehicle("BMW", "bat mobile", "dark grey", 8910);

    Collections collections;

    collections += car1;
    collections += car2;

    // what if we want to do 'collections += car1' instead of "push_back"? -> we have to overload the "+=" operator

    cout << collections << endl;

    return 0;
}