/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
Example 2:
Input: nums = [3,1,3,4,2]
Output: 3
*/
#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int> &nums)
{

    int reachable = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (reachable < i)
            return 0;
        reachable = max(reachable, i + nums[i]);
    }
    return reachable;
}
int main()
{
    vector<int> nums{1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << canJump(nums);
    return 0;
}