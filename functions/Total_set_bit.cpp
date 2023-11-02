#include <iostream>
using namespace std;
int Total_set_bits(int num1, int num2)
{
    int count1 = 0, count2 = 0;
    while (num1 != 0)
    {
        int bit = num1 & 1;
        if (bit == 1)
        {
            count1++;
        }
        num1 = num1 >> 1;
    }
    while (num2 != 0)
    {
        int bit = num2 & 1;
        if (bit == 1)
        {
            count2++;
        }
        num2 = num2 >> 1;
    }
    return count1 + count2;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int ans = Total_set_bits(num1, num2);
    cout << "Total set bits(i.e. 1) are " << ans << endl;
    return 0;
}