#include <iostream>

using namespace std;

template <class T>
class Vector
{
private:
    T* numbers;
    int size;
public:
    Vector(int size)
    {
        this->size = size;
        this-> numbers = new T[size]; // new array in heap
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

    T sumElements()
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += numbers[i];
        }

        return sum;        
    }
};

int main()
{   
    Vector<double> v1(6);
    v1.addElement();
    cout << "sum: " << v1.sumElements();

    return 0;
}