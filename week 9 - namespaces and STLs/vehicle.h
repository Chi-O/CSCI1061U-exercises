#include <iostream>

using namespace std;

class Vehicle
{
private:
    string name;
    int kms;
public:
    void drive()
    {
        cout << "I can drive" << endl;
    }
};