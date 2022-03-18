#include <iostream>
#include <random>

using namespace std;

// Numbers class (Parent class)
class Numbers
{
protected:
    int even_count;
    int odd_count;

public:
    // default Numbers constructor
    Numbers()
    {
        this->even_count = 0;
        this->odd_count = 0;
    }

    void incrementEvenCount(int count)
    {
        even_count += count;
    }
    void incrementOddCount(int count)
    {
        odd_count += count;
    }
};

// Even class (Child class of Numbers class)
class Even : public Numbers
{
public:
    // default constructor
    Even()
    {
    }

    void showEvenCount()
    {
        cout << "Even count: " << this->even_count << "\n";
    }
};

// Odd class (Child class of Numbers class)
class Odd : public Numbers
{
public:
    // default constructor
    Odd()
    {
    }

    void showOddCount()
    {
        cout << "Odd count: " << this->odd_count << "\n";
    }
};

int generateRandomNumber()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distrib(1, 100);

    return distrib(gen);
}

int main()
{
    Numbers *arr[10]; // array to store pointers of Numbers objects

    // initialize number counts to 0
    int number{0}, even_count{0}, odd_count{0};

    // generate a random number 10 times
    for (int i = 0; i < 10; i++)
    {
        // int this_num = generateRandomNumber();
        int this_num = i;

        cout << "Random number generated: " << this_num << "\n";

        // if it is even
        if (this_num % 2 == 0)
        {
            // create an object of Even class
            Even this_even_num;
            even_count ++;

            // make a pointer of the parent class to point to that object
            Numbers *this_num_ptr = &this_even_num;
            this_num_ptr->incrementEvenCount(even_count);
            this_even_num.showEvenCount();

            // then store that pointer into array
            arr[i] = this_num_ptr;
        }
        else // if number is odd
        {
            // create an object of Odd class
            Odd this_odd_num;
            odd_count++;

            // make a pointer of the parent class to point to that object
            Numbers *this_num_ptr = &this_odd_num;
            this_num_ptr->incrementOddCount(odd_count);
            this_odd_num.showOddCount();

            // then store that pointer into array
            arr[i] = this_num_ptr;
        }
    }
    

    return 0;
}