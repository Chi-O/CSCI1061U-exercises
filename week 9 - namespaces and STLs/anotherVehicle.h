#include <iostream>

using namespace std;

// create a namespace
namespace milkyWay
{
    class Vehicle
    {
    private:
        string name;
        int kms;

    public:
        void startEngine()
        {
            cout << "Vrooom" << endl;
        }
    };
} // namespace name
