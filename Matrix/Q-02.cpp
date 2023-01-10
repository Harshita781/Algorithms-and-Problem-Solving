 #include<bits\stdc++.h>
 using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int end=(row*col)-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int ele=matrix[mid/col][mid%col];
            if(ele==target){
                return true;
            }
            else if(ele>target){
                end=mid-1;
            }
            else
                start=mid+1;
            mid=start+(end-start)/2;
        }
       return false;
    }
int main(){
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=11;
    cout<<searchMatrix(matrix,target);
    return 0;
}