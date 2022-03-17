#include <iostream>
#include <vector>
#include <stack>
#include <array>

using namespace std;

int main()
{
    array<int, 5> arr;
    double num;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter element [" << i << "] = ";
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "element [" << i << "] = " << arr[i] << "\n";
    }


    return 0;
}