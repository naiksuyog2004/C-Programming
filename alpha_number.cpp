#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character : " << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It is lowercase.";
    }
    else if (ch >= 'A' && ch <= 'B')
    {
        cout << "It is uppercase.";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is number/digit.";
    }

    return 0;
}