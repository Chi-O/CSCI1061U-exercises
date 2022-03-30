#include <iostream>

using namespace std;

int main()
{
    double i = 5;
    cout << i << "\n";

    cout << typeid(typeid(i).name()).name() << "\n";

    // lambda function syntax
    // [capture list](parameter list) {function};
    []()
    { cout << "Hello World"; };

    return 0;
}