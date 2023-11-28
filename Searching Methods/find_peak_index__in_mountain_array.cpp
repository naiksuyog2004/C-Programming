#include <iostream>
#include <vector>
using namespace std;

int find_peak_index_in_mountain_array(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else // arr[mid] > arr[mid+1]  and for arr[mid]
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    vector<int> arr = {0, 2, 1, 0};
    cout << "index = " << find_peak_index_in_mountain_array(arr) << endl;
    return 0;
}