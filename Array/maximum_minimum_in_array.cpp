#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maxi = arr[0];

    for (int i = 1; i < size; i++)
    {

        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[], int size)
{
    int mini = arr[0];
    for (int i = 1; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int max = getMax(array, size);
    int min = getMin(array, size);

    cout << "Maximum no is " << max << endl;
    cout << "Minimum no is " << min << endl;
    return 0;
}