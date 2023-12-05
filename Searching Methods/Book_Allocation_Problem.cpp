#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(vector<int> &arr, int n, int m, int mid)
{
    int student = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((pagesum + arr[i]) <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m)
{

    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossibleSol(arr, n, m, mid) && n >= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 8, 8, 4, 5};
    int n = arr.size();
    int m = 6;
    cout << findPages(arr, n, m);
    return 0;
}