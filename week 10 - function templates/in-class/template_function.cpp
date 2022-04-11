#include <iostream>

using namespace std;

// make a function template
template <typename T, typename U> // add another data type
T sum(T x, U y)
{
    return x + y;
}

int main()
{
    double x = 5.2;
    int y = 7;
    cout << "Sum: " << sum(x, y) << "\n";
    return 0;
}