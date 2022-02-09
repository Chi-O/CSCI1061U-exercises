#include <iostream>

using namespace std;

class Vehicle
{
private: // access modifiers
    // properties .i.e. variables
    string name;
    string type;
    string color;
    int kms;

public:
    //constructor
    Vehicle(string name, string type, string color, int kms)
    {
        this -> name = name;
        this -> type = type;
        this -> color = color;
        this -> kms = kms;
    }

    Vehicle()
    {
        name = "Audi";
        type = "Cool";
        color = "Pink";
        kms = 702312;
    }

    // getter and setters
    int getKMS()
    {
        return kms;
    }
    string getName()
    {
        return name;
    }

    void setKMS(int kms)
    {
        if (kms >= 0)
        {
            this -> kms = kms;
        }
    }

    // actions .i.e. methods
    void carDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
        cout << "KMs: " << kms << endl;
        cout << endl;
    }

    void drive()
    {
        cout << "I can drive 🚗💨 \n"
             << endl;
    }

}; // Classes end with a semicolon