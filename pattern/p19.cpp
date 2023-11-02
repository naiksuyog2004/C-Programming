/*
    print:
    ****
    ***
    **
    *
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= number - row + 1)
        {
            cout << "*";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}