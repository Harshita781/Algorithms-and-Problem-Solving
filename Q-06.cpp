/*
iven two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
1 2 3 4 5
*/
#include<iostream>
using namespace std;
void Union(int arr1[],int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			cout<< arr1[i++] << " ";

		else if (arr2[j] < arr1[i])
			cout<< arr2[j++] << " ";

		else {
			cout<< arr2[j++] << " ";
			i++;
		}
	}

	while (i < m)
		cout << arr1[i++] << " ";

	while (j < n)
		cout << arr2[j++] << " ";
}
 void Intersection(int arr1[],int arr2[],int m,int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
		}
	}
 }
int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	Union(arr1, arr2, m, n);
	Intersection(arr1,arr2,m,n);
	return 0;
}
