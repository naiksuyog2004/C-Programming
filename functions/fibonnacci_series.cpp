#include <iostream>
using namespace std;

void Print_fibonnacci_series(int num)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < num; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main()
{
    int num;
    cin >> num;
    Print_fibonnacci_series(num);

    return 0;
}