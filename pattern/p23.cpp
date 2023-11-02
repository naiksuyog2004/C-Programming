/*
    print:
       1
      121
     12321
    1234321
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
        int space = number - row;
        while (space > 0)
        {
            cout << " ";
            space -= 1;
        }

        while (col <= row)
        {
            cout << col;
            col += 1;
        }

        int start = row - 1;
        while (start > 0)
        {
            cout << start;
            start -= 1;
        }

        cout << endl;
        row += 1;
    }

    return 0;
}