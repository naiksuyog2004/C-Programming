/*
    print:
    A
    BC
    CDE
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
        char ch = 'A';
        int col = 1;
        char sample = ch + row - 1;
        while (col <= row)
        {
            cout << sample;
            sample += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}