#include <iostream>

using namespace std;

template<class T>
class X
{
private:
    T x; // change each datatype to T

public:
    // default constructor
    X()
    {
        x = 0;
    }
    X(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }
};

template<class T>
class Y
{
private:
    T y;

public:
    // default constructor
    Y()
    {
        y = 0;
    }
    Y(T y)
    {
        this->y = y;
    }
    T getY()
    {
        return y;
    }
};

double sum(X<double> x1, Y<double> y1)
{
    return x1.getX() + y1.getY();
}

int main()
{
    X<double> x1 = X<double>(5.5); // have to specify the data type in angular brackets
    Y<double> y1 = Y<double>(7.89);

    cout << "Sum: " << sum(x1, y1) << "\n"; // works with int only

    return 0;
}