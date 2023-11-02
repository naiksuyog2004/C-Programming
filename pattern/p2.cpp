/*
    print:
    1111
    2222
    3333
    4444

*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int i = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
