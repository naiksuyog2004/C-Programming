#include <iostream>
using namespace std;

int arithmetic_Progression(int num)
{
    return (3 * num + 7);
}
int main()
{
    int num;
    cin >> num;
    int ans = arithmetic_Progression(num);
    cout << "3*n+7 = " << ans << endl;
    return 0;
}
