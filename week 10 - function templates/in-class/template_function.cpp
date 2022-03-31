#include <iostream>

using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int x = 5.2, y = 7.4;
    cout << "Sum: " << sum(x, y) << "\n";
    return 0;
}