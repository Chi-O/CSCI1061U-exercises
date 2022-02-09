#include <iostream>
#include <string>
#include "collections.h"

using namespace std;

class Point
{
private:
    int x, y, z;

public:
    Point()
    {
        x, y;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int getX() 
    {
        return x;
    }

    int getY() 
    {
        return y;
    }

    int getZ() 
    {
        return y;
    }

    // we can access the x, y attributes of the first operand using the this-> keyword, 
    // so we only need to pass one Point object (the second operand)
    Point operator+(Point& p) 
    {
        Point temp;
        temp.x = this->x + p.x;
        temp.y = this->y + p.y;

        return temp;
    }

    // get access to everything in the class without getters and setters
    friend int getAccessZ(Point point);
};

int getAccessZ(Point point)
{
    return point.z;
}

int main()
{
    Point p1 = Point(4, 5);
    Point p2 = Point(6, 7);

    Point result = p1 + p2;

    cout << "(" << p1.getX() << ", " << p1.getY() << ") + (" << p2.getX() << ", " << p2.getY();
    cout << ") = (" << result.getX() << ", " << result.getY() << ")";

    return 0;
}