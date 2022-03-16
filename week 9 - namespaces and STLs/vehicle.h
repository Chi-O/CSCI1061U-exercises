#include <iostream>

using namespace std;

// create a namespace
namespace galactic
{
    class Vehicle
    {
    private:
        string name;
        int kms;

    public:
        void drive()
        {
            cout << "I can drive \n";
        }
    };

    void globFunc()
    {
        cout << "Not part of the Vehicle class, sike! \n";
    }
}
