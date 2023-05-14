#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int matrixSum(vector<vector<int>>& nums) {

    //int sum=0;
    int thisiterativemax=0;
    vector<vector<int>> h;
      
       for(int i=0;i<nums.size();i++){
        vector<int> v;
        for(int j=0;j<nums[i].size();j++){
            v.push_back(nums[i][j]);
        }
        sort(v.begin(),v.end());
        for(int k=0;k<h.size();k++){
        int max=h[k][h[k].size()-1];
        if(max>thisiterativemax){
            thisiterativemax=max;
        }
       }
        v.pop_back();
        h.push_back(v);
       }
       
       
       

       return thisiterativemax+matrixSum(h);
    }

int main(){
    vector<vector<int>> h =  {{7,2,1},{6,4,2},{6,5,3},{3,2,1}};
    cout<<matrixSum(h);

    // vector<vector<int>> nums=matrixSum(h);
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<nums[j].size();j++){
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}