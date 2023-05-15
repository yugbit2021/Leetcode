//https://leetcode.com/problems/subsets/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int size=nums.size();
       int powerset=1<<size;
       vector<vector<int>> answer;

       for(int i=0;i<powerset;++i){
           vector<int>subset;
       

       for(int j=0;j<size;++j){
           if((1<<j)&i){
               subset.push_back(nums[j]);
           }
       } 
       answer.push_back(subset);
    }
    return answer;
    }
};