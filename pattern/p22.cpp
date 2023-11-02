/*
    print:
    1234
     234
      34
       4
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
        int space = row - 1;
        while (space > 0)
        {
            cout << " ";
            space -= 1;
        }
        while (col <= number - row + 1)
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