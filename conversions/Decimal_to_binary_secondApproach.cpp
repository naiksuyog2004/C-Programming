#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    float ans = 0;
    int i = 0;

    while (number != 0)
    {
        int bit = number % 2;
        ans = (bit * pow(10, i)) + ans;
        number = number / 2;
        i++;
    }
    cout << "The answer is " << ans << endl;

    return 0;
}