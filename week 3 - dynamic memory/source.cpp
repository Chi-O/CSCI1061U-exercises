#include <iostream>

using namespace std;

int main()
{
    // variable in stack memory
    int num = 7;
    cout << "number in stack: " << num << endl;


    int *ptr = new int;
    *ptr = num;

    cout << "number in heap: " << *ptr << endl;
    cout << "pointer: " << ptr << endl;

    return 0;
}