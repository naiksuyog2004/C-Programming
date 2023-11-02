/*
    123
    456
    789
*/

#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;

    int i = 1;
    int count = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << count << " ";
            count++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}