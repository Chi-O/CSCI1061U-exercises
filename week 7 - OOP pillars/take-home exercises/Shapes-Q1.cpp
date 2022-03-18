#include <iostream>

using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    // corresponding parameterized constructors in the parent class Shape
    Shape(int width)
    {
        this->width = width;

        cout << "Shape constructor \n";
    }
    Shape(int height, int width)
    {
        this->height = height;
        this->width = width;

        cout << "Shape constructor \n";
    }

    void calculateArea()
    {
        cout << width * height << "\n";
    }
};

class Square : public Shape
{
public:
    Square(int width) : Shape(width)
    {
        this->width = width;

        cout << "Square constructor \n";
    }
    void calculateArea()
    {
        cout << "Area of square: " << height * height << "\n";
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int height, int width) : Shape(height, width)
    {
        this->height = height;
        this->width = width;

        cout << "Rectangle constructor \n";
    }
    void calculateArea()
    {
        cout << "Area of rectangle: " << width * height << "\n";
    }
};

int main()
{
    Square s = Square(5);
    s.calculateArea();

    Rectangle r = Rectangle(5, 60);
    r.calculateArea();

    return 0;
}