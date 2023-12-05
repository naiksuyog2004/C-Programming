#include <iostream>
using namespace std;
long long int SquareRoot(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else
        { // mid * mid < n
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int num, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int tempsol = SquareRoot(num);
    cout << "The answer is " << morePrecision(num, 3, tempsol);
    return 0;
}