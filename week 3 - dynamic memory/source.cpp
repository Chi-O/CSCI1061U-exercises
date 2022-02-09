#include <iostream>

using namespace std;

int main()
{
    // stack
    int numbers[5] = {1, 2, 3, 4, 5 };

    // heap 
    int *ptr = new int[5]; // create an array of 5 ints inside heap memory

    ptr[0] = 1;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 2;
    ptr[4] = 3;
    return 0;
}