#include <iostream>

using namespace std;

namespace numbers1
{
    int count = 7;
} // namespace numbers1

namespace numbers2
{
    int count = 5;
} // namespace numbers2



int main()
{
    int count = 10;

    cout << "sum of all counts = " << numbers1::count + numbers2::count + count;
    
    return 0;
}