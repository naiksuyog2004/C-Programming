#include <iostream>
using namespace std;

int Get_Sum(int num1, int num2)
{
    return (num1 + num2);
}
int main()
{
    int count = 1;
    while (count == 1)
    {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int ans = Get_Sum(num1, num2);
        cout << "Sum of " << num1 << " and " << num2 << " is : " << ans << endl;
        cout << "Do you want to continue(Press 1) : ";
        cin >> count;
    }

    return 0;
}