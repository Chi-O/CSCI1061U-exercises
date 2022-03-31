#include <iostream>
using namespace std;

int fib(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fib(number - 1) + fib(number - 2);
    }
}
int main()
{
    int number;

    cout << "How many fibonacci numbers you want to generate: ";
    cin >> number;

    for (int i = number; i >= 1; i--)
    {
        cout << fib(i) << " ";
    }

    return 0;
}