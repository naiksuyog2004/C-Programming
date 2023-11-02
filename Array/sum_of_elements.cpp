#include <iostream>
using namespace std;

int sum_of_Element(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = sum_of_Element(arr, size);
    cout << "Sum = " << ans << endl;
    return 0;
}