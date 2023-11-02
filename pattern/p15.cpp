/*
    print:
    A
    BC
    DEF
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int row = 1;
    char ch = 'A';
    while (row <= number)
    {
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