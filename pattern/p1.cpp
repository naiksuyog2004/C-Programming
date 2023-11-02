/*
    print
    ****
    ****
    ****
    ****
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int i = 1; // row variable

    while (i <= number)
    {
        int j = 1; // column variable

        while (j <= number)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}