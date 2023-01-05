/*
Given a matrix of size r*c. Traverse the matrix in spiral form.

Example 1:

Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> spiralorder(const vector<vector<int>> &arr){
    int top,down,left,right,dir;
    top=0;
    down=arr.size()-1;
    left=0;
    right=arr[0].size()-1;
    dir=0;
    int i;
    vector<int>ans;
while(top<=down && left<=right){
    if(dir==0){
        for(i=left;i<=right;i++)
            ans.push_back(arr[top][i]);
        top++;
    }
    else if(dir==1){
        for(i=top;i<=down;i++)
            ans.push_back(arr[i][right]);
        right--;
    }
    else if(dir==2){
        for(i=right;i>=left;i--)
            ans.push_back(arr[down][i]);
        down--;
    }
    else if(dir==3){
        for(i=down;i>=top;i--)
            ans.push_back(arr[i][left]);
        left++;
    }
    dir=(dir+1)%4;
}

for(int j=0;j<ans.size();j++){
    cout<<ans[j]<<" ";
}
return ans;
}

int main(){
    vector<vector<int>> arr={{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};
    spiralorder(arr);
    return 0;
}