class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int target=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> ans1;
        for(int i=0;i<nums.size();i++){
            
            int low=i+1;
        int high= nums.size()-1;
        
        while(low<high){
            int sum=nums[i]+nums[low]+nums[high];
            if(sum==target){
               ans1.insert({nums[i],nums[low],nums[high]});
               low++;
               high--;
            }
            else if(sum>target){
                high--;
            }
            else{
                low++;
       }
        }

    }
    for(auto triplets :ans1)
    ans.push_back(triplets);
    return ans;
    }
};