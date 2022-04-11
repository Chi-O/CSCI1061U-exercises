#include <iostream>

// using namespace std;
// good practice to NOT include the whole namespace, but only the needed methods

class Vehicle
{
private: // access modifiers
    // properties .i.e. variables
    std::string name;
    std::string type;
    std::string color;
    int kms;

public:
    //constructor
    Vehicle(std::string name, std::string type, std::string color, int kms)
    {
        this -> name = name;
        this -> type = type;
        this -> color = color;
        this -> kms = kms;
    }

    // Vehicle()
    // {
    //     name = "Audi";
    //     type = "Cool";
    //     color = "Pink";
    //     kms = 702312;
    // }

    // getter and setters
    int getKMS()
    {
        return kms;
    }
    std::string getName()
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
