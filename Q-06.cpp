#include <iostream>
#include <stdlib.h>
using namespace std;
void Union(int *a,int *b, int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]!=n-1){
                cout<<a[i]<<" ";
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                j++;
            }
            }
            
        }
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MoveNegative(arr, n);
    print(arr, n);
    return 0;
}