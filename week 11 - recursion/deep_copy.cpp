#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
    int *z;

public:
    Point()
    {
        x = 0;
        y = 0;
        z = new int;
    }
    // for deep copy, override the functionality of the COPY CONSTRUCTOR
    Point(Point &p)
    {
        this->x = p.x;
        this->y = p.y;

        // first make z point to a new memory location in the heap
        this->z = new int;
        // copy the content of p's z into this z
        *this->z = *(p.z); // add '*' to dereference,
    }
    void setValues(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        *this->z = z;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setZ(int z)
    {
        *this->z = z;
    }
    void display()
    {
        cout << "X : " << x << ", Y: " << y << ", *Z = " << *z << "\n";
    }
};

int main()
{
    cout << "P1... \n";
    Point p1;
    p1.setValues(5, 7, 10);
    p1.display();

    Point p2 = p1; // copy the contents of p1 to p2 (field-by-field copy)
    p2.setValues(8, 9, 11);

    // make changes to p1
    p1.setZ(100);
    cout << "P1... \n";

    p1.display();
    cout << "P2... \n";

    p2.display();
}