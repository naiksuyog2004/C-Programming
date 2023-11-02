#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Calculate_nCr(int n, int r)
{
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    int ans = Calculate_nCr(n, r);
    cout << "nCr = " << ans << endl;
    return 0;
}