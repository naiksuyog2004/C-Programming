#include <iostream>
using namespace std;
int find_Minimum_in_sorted_and_rotated_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "Index = " << find_Minimum_in_sorted_and_rotated_array(arr, 5);
    return 0;
}