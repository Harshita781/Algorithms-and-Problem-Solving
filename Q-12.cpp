/*
We are given two sorted arrays. We need to merge these two arrays such that the initial numbers (after complete sorting) are in the first array and the remaining numbers are in the second array. Extra space is allowed in O(1).

Example: 
Input: ar1[] = {10};
       ar2[] = {2, 3};
Output: ar1[] = {2}
        ar2[] = {3, 10} 
*/
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void mergesortedarray(vector <int> a, vector <int> b){
  int k=b.size();
    for(int i=0;i<a.size();i++){
         for(int j=0;j<b.size();j++){
          if(a[i]>b[j]){
            swap(a[i],b[j]);
          }
         }
         
      sort(b,k); 
    }
}
/*void print(int a[],int k){
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
}*/
int main(){
      vector <int> a={1,2,3,4,5};
      vector <int> b={6,7,8,9};
      mergesortedarray(a,b);
     // print(a,k);
      return 0;
}