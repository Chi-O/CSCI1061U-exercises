#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    auto i = 5;
    cout << i << endl;
    cout << typeid(i).name() << endl;

    return 0;
}
