#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
        
        int reachable=0;
        for(int i=0;i<nums.size();++i){
            if(reachable<i)
                return 0;
            reachable=max(reachable,i+nums[i]);
            
        }
        return reachable;
        
    }
int main(){
     vector <int> nums {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
     cout<<canJump(nums);
     return 0;
     }