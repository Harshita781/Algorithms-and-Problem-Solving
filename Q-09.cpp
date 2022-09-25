/*
Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
nput:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as
{3, 3, 6, 8}. The difference between
the largest and the smallest is 8-3 = 5.
*/
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n - 1];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - k < 0)
            continue;

        tempmin = min(arr[0] + k, arr[i] - k);
        tempmax = max(arr[i - 1] + k, arr[n - 1] - k);
        ans = min(ans, tempmax - tempmin);
    }
    return ans;
}

int main()
{

    int k = 6, n = 6;
    int arr[n] = {7, 4, 8, 8, 8, 9};
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}