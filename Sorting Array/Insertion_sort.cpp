#include <iostream>
using namespace std;

int main()
{
    int size, temp;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    int a[size];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // logic for sorting array
    for (int i = 1; i < size; i++)
    {
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && temp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    // sorting ends here

    cout << "Therefore, the sorted array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}