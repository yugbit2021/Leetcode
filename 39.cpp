#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> v1;

        for(int i=0;i<candidates.size();i++){

        if(target%candidates[i]==0){
            int j=1;
            while(candidates[i]*j<=target){
            v1.push_back(candidates[i]);
           j++;
        }
         v.push_back(v1);
         while(v1.size()!=0){
            v1.pop_back();
         }
        }

        else{
            int j=1;
            while(candidates[i]*j<target){
                v1.push_back(candidates[i]);
                j++;
            }
            if(i==0){
                v1.pop_back();
                if( i<candidates.size()&& candidates[i]*j+candidates[i+1]==target){
                    v1.push_back(candidates[i+1]);
                }
                else if(i!=0){
                    if(candidates[i]*j+candidates[i-1]==target){
                        v1.push_back(candidates[i-1]);
                    }
                }
            }


            sort(v1.begin(),v1.end());
            v.push_back(v1);
            while(v1.size()!=0){
            v1.pop_back();
         }
         }
        }
        return v;
        
    }

    int main(){
        vector<int> candidates={2,3,6,7};
        vector<vector<int>> ans=combinationSum(candidates,7);

        //cout<<ans[0][0];

       for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
       }
        
    }