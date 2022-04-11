#include <iostream>

using namespace std;

int main()
{
    // lambda function syntax
    // [capture list](parameter list) {function};

    // store our lambda expression in a variable in order to call it
    auto display = []()
    { cout << "Hello World \n"; };

    display(); // make sure to call the function

    // a parameterized lambda function
    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(5, 7);

    return 0;
}