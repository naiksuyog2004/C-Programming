#include <iostream>
using namespace std;

int main()
{
    int no = 1;
    while (no == 1)
    {
        int num1;
        cout << "Enter first number:";
        cin >> num1;

        int num2;
        cout << "Enter second number:";
        cin >> num2;

        char Operation;
        cout << "Enter the Operation(+ , - , / , *:)";
        cin >> Operation;

        switch (Operation)
        {
        case '+':
            cout << "Addition = " << (num1 + num2) << endl;
            break;

        case '-':
            cout << "Subtraction = " << (num1 - num2) << endl;
            break;

        case '/':
            cout << "Division = " << (num1 / num2) << endl;
            break;

        case '*':
            cout << "Multiplication = " << (num1 * num2) << endl;
            break;

        default:
            cout << "Invalid Operation" << endl;
        }
        cout << "do you want to continue press 1 : ";
        cin >> no;
    }
    return 0;
}