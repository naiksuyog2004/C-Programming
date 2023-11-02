/*
    print:
       *
      **
     ***
    ****
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
        int space = number - row;
        int col = 1;
        while (space > 0)
        {
            cout << " ";
            space -= 1;
        }
        while (col <= row)
        {
            cout << "*";
            col += 1;
        }

        cout << endl;
        row += 1;
    }

    return 0;
}