// in-class Class demonstration
// 26/01/2022

#include "vehicle.h"

class X
{
private:
    int x;
public:
    X()
    {
        x = 0;
    }

    int getX()
    {
        return x;
    }

    void setX(int x)
    {
        this -> x = x; // explicitly tell the compiler which variable you are referring to
    }
};


int main()
{
    X obj = X();

    obj.setX(10);

    cout << obj.getX();

    return 0;
}