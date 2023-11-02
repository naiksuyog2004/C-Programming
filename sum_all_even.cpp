#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:" << endl;
    cin >> number;

    int i = 1;
    int sum = 0;
    while (i <= number)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i += 1;
    }

    cout << "Sum is " << sum;
    return 0;
}