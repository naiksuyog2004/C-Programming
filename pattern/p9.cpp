/*
    print:
    1
    21
    321
    4321
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
        int sample = row;
        int col = 1;
        while (col <= row)
        {
            cout << sample << " ";
            sample -= 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}