//https://leetcode.com/problems/search-in-rotated-sorted-array/

    class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
    int hi=nums.size()-1;

    int ans=-1;

    while(lo<=hi){
        int mid=(lo+hi)/2;

        if(nums[mid]==target){
            ans=mid;
            break;
        }
        if(nums[lo]<=nums[mid]){
            if(nums[mid]>=target && nums[lo]<=target){
                hi=mid-1;
            }
        else{
            lo=mid+1;
        }
          }
        else{
            if(nums[mid]<=target && target<=nums[hi]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
    }
    return ans;
    }
};

