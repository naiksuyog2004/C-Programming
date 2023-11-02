#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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
    int key;
    cout << "Enter the key: ";
    cin >> key;

    bool result = search(arr, size, key);

    if (result)
    {
        cout << "Number found in array." << endl;
    }
    else
    {
        cout << "Number not found." << endl;
    }

    return 0;
}