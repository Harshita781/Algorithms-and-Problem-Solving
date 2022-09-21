/*
Given an array, rotate the array by one position in clock-wise direction.

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/
#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, n);
    rotate(arr, n);
    cout << endl
         << "After rotation:" << endl;
    print(arr, n);
    return 0;
}