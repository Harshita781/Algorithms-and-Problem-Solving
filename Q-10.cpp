/*
Given an array of N integers arr[] where each element represents the max length of the jump that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.
Example 1:
Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
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