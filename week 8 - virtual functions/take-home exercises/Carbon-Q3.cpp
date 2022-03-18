#include <iostream>
#include <vector>

using namespace std;

// CarbonFootprint abstract class
class CarbonFootprint
{
public:
    virtual void getCarbonFootprint() = 0; // pure virtual function
};

class Bicycle : public CarbonFootprint
{
public:
    // Overrides the getCarbonFootprint()
    virtual void getCarbonFootprint() override
    {
        cout << "Bicycle";
        cout << 0 << "\n";
    }
};

class Car : public CarbonFootprint
{
private:
    double gallons;

public:
    // parameterized constructor
    Car(double gallons)
    {
        this->gallons = gallons;
    }

    // Overrides the getCarbonFootprint()
    virtual void getCarbonFootprint() override
    {
        cout << gallons * 20 << "\n";
    }
};

class Building : public CarbonFootprint
{
private:
    int squareFeet, wood, concrete, steel, glass;

public:
    // parameterized constructor
    Building(int squareFeet, int wood, int concrete, int steel, int glass)
    {
        this->squareFeet = squareFeet;
        this->wood = wood;
        this->concrete = concrete;
        this->steel = steel;
        this->glass = glass;
    }

    // Overrides the getCarbonFootprint()
    virtual void getCarbonFootprint() override
    {
        cout << squareFeet * (wood + concrete + steel + glass) << "\n";
    }
};

int main()
{
    // create a vector of CarbonFootprint pointers
    vector<CarbonFootprint *> carbon_ptr_v;

    // Make each pointer of this vector point to an object of Bicycle, Car and Building respectively.
    carbon_ptr_v.push_back(new Bicycle());

    carbon_ptr_v.push_back(new Car(10));

    carbon_ptr_v.push_back(new Building(2500, 50, 17, 20, 5));

    // cout << "Code reaches here \n";

    for (int i = 0; i < carbon_ptr_v.size(); i++)
    {
        carbon_ptr_v[i]->getCarbonFootprint();
    }

    // deallocate the memory in the heap for all the objects
    for (int i; i < sizeof(carbon_ptr_v); i++)
    {
        delete carbon_ptr_v[i];
    }

    return 0;
}