//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        for(auto interval: intervals){
            if(merged.empty()|| merged.back()[1] < intervals[0]){
                merged.push_back(intervals);
                
            }
            else{
                merged.back()[1]=max(merged.back()[1],intervals[1]);
            }
        }
        return merged;
    }

int main(){
    vector<vector<int>> intervals {{1,3},{2,6},{8,10},{15,18}};
    merge(intervals);
    return 0;
}