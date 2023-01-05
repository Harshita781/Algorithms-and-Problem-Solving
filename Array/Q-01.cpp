/*
Q.1  Write a program to reverse an array or string.

input-  5
        1 2 3 4 5
output- 5 4 3 2 1

*/

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Reverse(int *arr, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

void Print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr, n);
    Print(arr, n);
    return 0;
}