/*
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?
Example 1:
Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> v;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            v.push_back(A[i]);
        }
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
        int x = A[i - 1];
        while (A[i] == x)
        {
            i++;
        }
        int y = B[j - 1];
        while (B[j] == y)
        {
            j++;
        }
        int z = C[k - 1];
        while (z == C[k])
        {
            k++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return v;
}
int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int n1 = sizeof(A) / sizeof(A[0]);
    int B[] = {6, 7, 20, 80, 100};
    int n2 = sizeof(B) / sizeof(B[0]);
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n3 = sizeof(C) / sizeof(C[0]);
    commonElements(A, B, C, n1, n2, n3);
    return 0;
}