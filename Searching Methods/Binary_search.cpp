#include <iostream>
using namespace std;
int BinarySearch(int a[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // It is equivalent to (start+end)/2

    while (start <= end)
    {
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key > a[mid])
        {
            start = mid + 1;
        }
        else // key<a[mid]
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
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
    // sorting ends here
    cout << "Sorted array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }

    int key;
    cout << "\tEnter the Key value: " << endl;
    cin >> key;
    int answer = BinarySearch(a, size, key);

    if (answer == -1)
    {
        cout << "Number not found." << endl;
    }
    else
    {
        cout << "Number found at index " << answer << endl;
    }

    return 0;
}