/*
Q.3  Find Kth min and Kth max element in an array.
i/p   7
      3 7 1 2 10 11 6
      2
o/p   2 10

*/
// Simple C++ program to find k'th smallest element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Kth_MinMax(vector <int> arr,int n,int k){
        sort(arr.begin(),arr.end());
        int max=arr[0];
        int min=arr[0];
         min=arr[k-1];
         max=arr[n-k+1];
         cout<<"Kth maximum: "<<max<<endl;
         cout<<"Kth minimum: "<<min<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    cout<<"Enter array elements: ";
    int a;
    for(int i=0; i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int k;
    cout<<"Enter K:";
    cin>>k;
    Kth_MinMax(arr,n,k);
    return 0;
}