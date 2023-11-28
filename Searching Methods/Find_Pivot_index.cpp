#include <iostream>
#include <vector>
using namespace std;
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

int pivotIndex(vector<int> &nums)
{
    int totalSum = 0;
    int leftSum = 0;
    for (int num : nums)
    {
        totalSum += num;
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Index = " << pivotIndex(nums) << endl;
    ;

    return 0;
}