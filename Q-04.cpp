/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
void sort012(int *arr,int *arr2,int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
         if(arr[i]==0){
            c0++; 
        
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }  
    for(int i=0;i<n;i++){
        if(c0!=0){
            arr2[i]=0;
            c0--;
        }
        else if(c1!=0){
            arr2[i]=1;
            c1--;
        }
        else if(c2!=0){
            arr2[i]=2;
            c2--;
        }
    }
}
void print(int arr2[],int n){
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int n=5;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *arr2=new int [n];
    sort012(arr,arr2,n);
    print(arr2,n);
    return 0;
}