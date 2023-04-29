class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        priority_queue<int , vector<int> , greater<int>> h;
        int i=1;
        h.push(nums[0]);
        int count=2;
        while(i<nums.size()){
            if(count<=3 && nums[i]!=nums[i-1]){
                h.push(nums[i]);
                count++;
                i++;
            }
            else if(nums[i]==nums[i-1]){
                i++;
            }else{
                if(nums[i]>h.top()){
                    h.pop();
                    h.push(nums[i]);
                    i++;
                }
            }
            
        }
        if(h.size()<3){
           h.pop();
        }
      return h.top();  
    }
};