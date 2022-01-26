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
        this->x = x; // explicitly tell the compiler which variable you are referring to
    }
};

class Y
{
private:
    int y;

public:
    Y()
    {
        y = 0;
    }

    int getY()
    {
        return y;
    }

    void setY(int y)
    {
        this->y = y; // explicitly tell the compiler which variable you are referring to
    }
};

void add(X obj1, Y obj2) // you can pass objects as parameters
{
    cout << obj1.getX() + obj2.getY() << endl;
}

int main()
{
    Y obj2 = Y();
    obj2.setY(10);
    cout << obj2.getY() << endl;

    X obj1 = X();
    obj1.setX(10);
    cout << obj1.getX() << endl;

    add(obj1, obj2);

    return 0;
}