/*
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
*/
#include <bits/stdc++.h>
using namespace std;
bool ThreeSum(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int l, r;
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == target)
            {
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < target)
                l++;
            else
                r--;
        }
    }
    return false;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    if (ThreeSum(arr, n, target))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}