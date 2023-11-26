#include <iostream>
using namespace std;
int first_Occurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else // arr[mid] > key
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int last_Occurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else // arr[mid] > key
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int size, temp;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int a[size];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // sorting array
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

    cout << "Therefore, the sorted array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int key;
    cout << "\nEnter the key:" << endl;
    cin >> key;
    int first = first_Occurrence(a, size, key);
    int last = last_Occurrence(a, size, key);
    cout << "First Occurrence of " << key << " is index " << first << endl;
    cout << "last Occurrence of " << key << " is index " << last << endl;
    return 0;
}