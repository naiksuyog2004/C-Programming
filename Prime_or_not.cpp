#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:" << endl;
    cin >> number;
    int i = 2;
    int ans;
    while (i < number)
    {
        if (number % i == 0)
        {
            ans = 0;
            break;
        }
        i += 1;
    }
    if (ans == 0)
    {
        cout << "Number is not prime";
    }
    else
    {
        cout << "Number is prime";
    }

    return 0;
}