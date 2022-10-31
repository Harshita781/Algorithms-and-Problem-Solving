#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
        
        int ind1,ind2,i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind1]){
                ind2=i;
                break;
            }
        }
        int temp=nums[ind1];
                nums[ind1]=nums[ind2];
                nums[ind2]=temp;
        
        reverse(nums.begin()+ind1+1,nums.end());  
        }
        for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
        }
    }
    int main(){
        vector<int> nums {1,2,3};
        nextPermutation(nums);
        return 0;

    }