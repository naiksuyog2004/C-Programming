#include <iostream>
#include <vector>
using namespace std;
/*
    Problem:
    you have given a sorted array list 'arr' consisting of'n' elements.you are alse given an integer k
    now the array is rotated at some pivot point unknown to you.
    Now, your task is to find the index at which 'k' is present in 'arr'.
*/
int BinarySearch(vector<int> &arr, int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int getPivot(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;
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
int search(vector<int> &arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if (arr[pivot] <= k && arr[n - 1] >= k)
    {
        return BinarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int key = 3;
    vector<int> arr = {7, 9, 1, 2, 3};
    int n = arr.size();
    cout << search(arr, n, key) << endl;
    return 0;
}