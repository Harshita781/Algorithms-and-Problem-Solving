 #include<bits/stdc++.h>
 using namespace std;
 long long maxSubarraySum(int arr[], int n){
        
       int sum=0;
       int maxi=arr[0];
       for(int i=0;i<n;i++){
           sum=sum+arr[i];
           maxi=std::max(maxi,sum);
           if(sum<0){
               sum=0;
           }
       }
        return maxi;
    }

    int main(){
        int n=5;
        int arr[]={1,2,3,-2,5};
        cout<<maxSubarraySum(arr,n);
        return 0;
    }