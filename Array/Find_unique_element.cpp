// eg. {1,3,4,4,3,5,5}
// ac count of 1 in above array is unique print 1 as o/p.

#include <iostream>
using namespace std;
int Find_unique_element(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << " ";
    }
    return ans;
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

    int answer = Find_unique_element(arr, size);
    cout << "Unique element = " << answer << endl;
    return 0;
}