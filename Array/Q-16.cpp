/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).*/

#include<iostream>
using namespace std;
int merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k;
    int inv_count=0;
    i=left;
    j=mid;
    k=left;
    while((i<=mid-1)&&(j<=right)){
        if(arr[i]<=j){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inv_count=inv_count+(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inv_count;
}
int _mergeSort(int arr[],int temp[],int left,int right){
    int mid,inv_count=0;
    if(right>left){
        mid=(right+left)/2;
        inv_count+=_mergeSort(arr,temp,left,mid);
        inv_count+=_mergeSort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);

    }
    return inv_count;
}
int main(){
    int arr[]={2, 4, 1, 3, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int ans=_mergeSort(arr,temp,0,n-1);
    cout<<"Number of inversion are: "<<ans;
    return 0;
}