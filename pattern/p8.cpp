/*
    print:
    1
    23
    345
    4567
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
        int sam = row;
        int col = 1;
        while (col <= row)
        {
            cout << sam << " ";
            sam += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}