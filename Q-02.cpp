/*
Q.2  Maximum and minimum of an array using minimum number of comparisons

i/p-   5
       3 5 11 6 9
o/p-   11

*/
#include <iostream>
using namespace std;
void max_min(int *arr, int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum is: " << max << endl;
    cout << "Minimum is: " << min << endl;
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
    max_min(arr, n);

    return 0;
}