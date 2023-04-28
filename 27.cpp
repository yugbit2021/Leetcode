class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //remove duplicates we use set
      set<int> nums1;
      for(int i=0;i<nums.size();i++){
        nums1.insert(nums[i]);
      }
      int sizeofnums1=nums1.size();
      nums.clear();
      for(auto i:nums1){
        nums.push_back(i);
      }
      return sizeofnums1;
    }
};