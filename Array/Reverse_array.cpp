#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    cout << "Reverse array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse_array(arr, size);
    printArray(arr, size);

    return 0;
}