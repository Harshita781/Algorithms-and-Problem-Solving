/*
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
*/
#include <iostream>
using namespace std;
int maxSumSubarray(int arr[], int n)
{
    int maxsum = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, -2, 5};
    cout << maxSumSubarray(arr, n);
    return 0;
}