#include <iostream>
using namespace std;

// // WITHOUT RECURSION
// int power(int base, int exponent)
// {
//     int result = 1;

//     for (int i = 1; i <= exponent; i++)
//     {
//         result = result * base;
//     }

//     return result;
// }

// WITH RECURSION
int power(int base, int exponent)
{
    if (exponent < 1)
    {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base, exponent;
    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}