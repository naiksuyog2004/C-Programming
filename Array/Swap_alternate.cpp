#include <iostream>
using namespace std;

void Swap_alternative(int arr[], int size)
{
    int start = 0;
    while (start < size - 1)
    {
        swap(arr[start], arr[start + 1]);
        start += 2;
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
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Swap_alternative(arr, size);
    printArray(arr, size);
    return 0;
}