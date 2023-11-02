#include <iostream>
using namespace std;

bool isEven(int number)
{
    if (number & 1)
    {
        return 0; // even
    }
    else
    {
        return 1; // odd
    }
}
int main()
{

    int number;
    cout << "Enter number : ";
    cin >> number;

    bool ans = isEven(number);

    if (ans)
    {
        cout << "Number is even." << endl;
    }
    else
    {
        cout << "Number is odd." << endl;
    }
    return 0;
}