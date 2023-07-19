class Solution {
public:
vector<vector<int>>v;
void inpermute(vector<int>& nums,int i){
//base case
if(i>=nums.size()){
    v.push_back(nums);
    return ;
}

//rec case
for(int j=i;j<nums.size();j++){
    swap(nums[i],nums[j]);
    inpermute(nums,i+1);
    swap(nums[i],nums[j]);
}
}
    vector<vector<int>> permute(vector<int>& nums) {
      inpermute(nums,0);
        return v;
    }
};