/*
    1234
    1234
    1234
    1234
*/
#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;

    int i = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            // cout << j;//to print 1234
            cout << number - j + 1; // to print 4321
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}