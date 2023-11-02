#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num;
    cin >> num;

    float ans = 0;
    int i = 0;
    while (num != 0)
    {
        int rem = num % 8;
        ans = (rem * pow(10, i)) + ans;
        num = num / 8;
        i++;
    }
    cout << "Octal no. is " << ans << endl;
    return 0;
}