#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the amount : ";
    cin >> amount;

    int hundreds, fifty, twenty, ten;
    cout << "How many 100rs,50rs,20rs and 10rs cash required : " << endl;

    hundreds = amount / 100;
    cout << "100Rs = " << hundreds << endl;
    amount = amount - hundreds * 100;

    fifty = amount / 50;
    cout << "50Rs = " << fifty << endl;
    amount = amount - fifty * 50;

    twenty = amount / 20;
    cout << "20Rs = " << twenty << endl;
    amount = amount - twenty * 20;

    ten = amount / 10;
    cout << "10Rs = " << ten << endl;
    amount = amount - ten * 10;

    return 0;
}