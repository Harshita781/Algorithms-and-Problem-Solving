#include<iostream>
using namespace std;
int maxSumSubarray(int arr[],int n){
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main(){
    int n=6;
    int arr[6]={1,2,3,-2,5};
    cout<<maxSumSubarray(arr,n);
    return 0;
}