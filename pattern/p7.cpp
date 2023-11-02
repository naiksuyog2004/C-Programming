/*
    print:
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int count = 1;
    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}