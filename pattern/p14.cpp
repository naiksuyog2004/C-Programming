/*
    print:
    A
    BB
    CCC
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
            col += 1;
        }
        ch += 1;
        cout << endl;
        row += 1;
    }

    return 0;
}