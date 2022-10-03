#include<iostream>
using namespace std;
void mergesortedarray(int a[],int b[],int n, int m,int k){
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
          if(a[i]>b[j]){
            int temp=a[i];
            a[i]=b[j];
            b[j]=temp;
          }
         }
        for(int k=0;k<n;k++){
           cout<<a[i]<<" ";
        }
        for(int k=0;k<m;k++){
          cout<<" "<<b[k];
        }
    }
}
void print(int a[],int k){
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
      int n=5,m=4;
      int a[]={1,2,3,4,5};
      int b[]={6,7,8,9};
      int k=n+m;
      mergesortedarray(a,b,n,m,k);
     // print(a,k);
      return 0;
}