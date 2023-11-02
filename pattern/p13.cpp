/*
    print:
    ABC
    BCD
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
        char sample = ch + row - 1;
        int col = 1;
        while (col <= number)
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