/*
    print Dabang pattern:

    12344321
    123**321
    12****21
    1******1
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
        int sample = col;
        while (sample <= number - row + 1)
        {
            cout << sample;
            sample += 1;
        }

        int start = row - 1;
        while (start > 0)
        {
            cout << "*";
            start -= 1;
        }
        int newstart = row - 1;
        while (newstart > 0)
        {
            cout << "*";
            newstart -= 1;
        }

        int newsample = number - row + 1;
        while (newsample > 0)
        {
            cout << newsample;
            newsample -= 1;
        }

        cout << endl;
        row += 1;
    }

    return 0;
}