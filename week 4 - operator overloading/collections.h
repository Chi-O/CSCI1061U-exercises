#include "vehicle.h"
#include <vector>

class Collections
{
private:
    vector<Vehicle> v;

public:
    // operator overlaoding using member-functions
    // NOTE: because this is a member-function, we don't need to include the class object as a parameter
    void operator+=(Vehicle& vehicle)
    {
        v.push_back(vehicle);
    }

    vector<Vehicle> getV()
    {
        return v;
    }

};