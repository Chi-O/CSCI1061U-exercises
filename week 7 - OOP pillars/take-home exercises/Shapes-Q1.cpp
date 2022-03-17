#include <iostream>

using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    void setHeight(int height)
    {
        this->height = height;
    }
    void setWidth(int width)
    {
        this->width = width;
    }
    void calculateArea()
    {
        cout << width * height << "\n";
    }
};

class Square : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of square: " << height * height << "\n";
    }
};

class Rectangle : public Shape
{
public:
    void calculateArea()
    {
        cout << "Area of rectangle: "<< width * height << "\n";
    }
};

int main()
{
    Square s;
    s.setHeight(5);
    s.calculateArea();

    Rectangle r;
    r.setHeight(50);
    r.setWidth(15);
    r.calculateArea();

    return 0;
}