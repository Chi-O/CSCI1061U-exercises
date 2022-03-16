#include <iostream>
#include <vector>
#include <stack>

using namespace std;

template <class T>
class Stack 
{
private:
    vector<T> stack;
public:
    void push(T e)
    {
        stack.push_back(e);
    }

    void pop()
    {
        stack.pop_back();
    }

    // FILO first in, last out
    void display()
    {
        cout << "from top to bottom... \n";
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            cout << "element [" << i << "] = " << stack[i] << "\n";
        }
    }
};

int main()
{   
    stack<double> s;
    double num;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter element [" << i << "] = ";
        cin >> num;
        s.push(num);
    }

    while (!s.empty())
    {
        cout << s.top() << "\n";
        s.pop();
    }
    

    return 0;
}