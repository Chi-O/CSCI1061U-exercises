#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Queue
{
private:
    vector<T> q;
    int size;
public:
    Queue(T size)
    {
        this->q;
        this->size = size;
    }

    void addToQueue(T e)
    {
        q.push_back(e);
    }

    void removeFromQueue()
    {
        if (size > 0)
        {
            q.erase(q.begin());
        }
    }

    void display()
    {
        cout << "Displaying current data of the queue... \n";

        for (int i = 0; i < size; i++)
        {
            cout << "Element[" << i << "] = " << q[i] << endl;
        }
        
    }
};

int main()
{
    Queue<int> q(5);

    for (int n = 0; n < 5; n++)
    {
        int num;
        cout << "Enter Element " << n << ": ";
        cin >> num;

        q.addToQueue(num);
    }

    q.display();
    
    return 0;
}