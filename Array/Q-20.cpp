/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/
#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
    for(int i=0;i<nums1.size();i++)
    {
        nums.push_back(nums1[i]);
        
    }
    for(int j=0;j<nums2.size();j++)
    {
        nums.push_back(nums2[j]);
        
    }
    sort(nums.begin(),nums.end());
    int k=nums.size();
    return k%2?nums[k/2]:(nums[k/2-1]+nums[k/2])/2.0;
        
    }

int main(){
    vector<int>nums1={1,3};
    vector<int>nums2={4};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}