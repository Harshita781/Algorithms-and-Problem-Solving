/*
Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.


Example 1:

Input: 
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    for(int i=0;i<=r;i++){
        if(arr[i]<a){
            swap(arr[i],arr[l]);
            l++;
        }
        else if(arr[i]>b){
            swap(arr[i],arr[r]);
            r--;
            i--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}