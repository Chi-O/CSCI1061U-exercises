#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "enter number 1: ";
    cin >> num1;

    cout << "enter number 2: ";
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw "Error"; // throw error here; make sure the data types match

        }
        else
        {
            cout << "result: " << num1/num2;

        }
        
    } 
    // catch and handle exception here
    catch(int e)
    {
        cout << e;
    }
    // // you can have multiple catch blocks of different data types
    // catch (const char* e)
    // {
    //     cout << e;
    // }
    // you can have a generic catch block to catch anything
    // ORDER MATTERS; this should be the last
    catch (...)
    {
        cout << "Exception handled ";
    }
    return 0;
}