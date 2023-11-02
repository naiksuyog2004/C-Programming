#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:";
    cin >> number;

    int sum = 0;
    int i = 1;
    while (i <= number)
    {
        sum += i;
        i += 1;
    }

    cout << "Sum is " << sum;
    return 0;
}