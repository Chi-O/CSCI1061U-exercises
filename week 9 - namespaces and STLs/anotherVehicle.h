#include <iostream>

using namespace std;

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