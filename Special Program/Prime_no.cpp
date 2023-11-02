#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:";
    cin >> number;

    bool isprime = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime == 0)
    {
        cout << "This is not a prime number.";
    }
    else
    {
        cout << "This is a prime number.";
    }

    return 0;
}