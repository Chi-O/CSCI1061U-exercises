#include <iostream>

using namespace std;

class X
{
private:
    int x;

public:
    // default constructor
    X()
    {
        x = 0;
    }
    X(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
};

class Y
{
private:
    int y;

public:
    // default constructor
    Y()
    {
        y = 0;
    }
    Y(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }
};

int sum(X x1, Y y1)
{
    return x1.getX() + y1.getY();
}

int main()
{
    X x1 = X(5); 
    Y y1 = Y(7);

    cout << "Sum: " << sum(x1, y1) << "\n"; // works with int only

    return 0;
}