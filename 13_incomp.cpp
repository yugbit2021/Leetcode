#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        

        int i=0;
        while(nums[i]+nums[i+1]+nums[i+2]<target){
            i++;
        }
        return min(nums[i]+nums[i+1]+nums[i+2] , nums[i+1]+nums[i+2]+nums[i+3]);
    }

    int main(){
        vector<int> v = {-1,2,1};
        cout<<threeSumClosest(v,1);
    }