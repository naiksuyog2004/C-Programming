#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    char ch = 'A';
    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= number)
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