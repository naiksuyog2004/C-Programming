#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int a[size];
    cout << "Enter the elements os array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // sorting array
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int b = a[i];
            a[i] = a[min];
            a[min] = b;
        }
    }

    cout << "Sorted array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}