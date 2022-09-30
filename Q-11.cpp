#include<iostream>
using namespace std;
void mergesortedarray(int a[],int b[],int n, int m){
    int k=m+n;
    for(int i=0;i<k;i++){
        for(int j=0,l=0;j<n,l<m;j++,l++){
            if(a[j]<=b[l]){
                a[k]=a[j];
            }
            else{
                a[k]=b[l]
            }
        }   
    }
}
void print(int a[]){
    for(int)
}
int main(){

}