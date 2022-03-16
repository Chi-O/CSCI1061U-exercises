#include <iostream>

using namespace std;

class Vector
{
private:
    int* numbers;
    int size;
public:
    Vector(int size)
    {
        this->size = size;
        this-> numbers = new int[size]; // new array in heap
    }

    void addElement()
    {
        cout << "enter " << size << " elements ... \n";

        for (int i = 0; i < this->size; i++)
        {
            cout << "enter element[" << i << "] = ";
            cin >> numbers[i];
        }
        
    }

    int sumElements()
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += numbers[i];
        }

        return sum;        
    }
};

int main()
{   
    Vector v1(6);
    v1.addElement();
    cout << "sum: " << v1.sumElements();

    return 0;
}