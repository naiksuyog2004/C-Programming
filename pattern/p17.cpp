/*
    print:
    D
    CD
    BCD
    ABCD
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
        char ch = 'A' + (number - row);
        int col = 1;
        while (col <= row)
        {
            cout << ch;
            ch += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}