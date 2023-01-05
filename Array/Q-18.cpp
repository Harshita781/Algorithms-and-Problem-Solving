/*
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
Example 1:
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
*/
#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
        int tc=0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(k-arr[i]) != mp.end())
                tc += mp[k-arr[i]];
            mp[arr[i]]++;
        }
        return tc;
    }
int main()
{
    int n;
    int arr[]={1, 5, 7, 1};
    n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<<getPairsCount(arr,n,k);
    return 0;
}
