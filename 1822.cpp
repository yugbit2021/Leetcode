class Solution {
public:
int signFunc(int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return 1;
    }else{
        return -1;
    }
}
    int arraySign(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }else if(nums[i]<0){
            count ++;
        }}
        return signFunc(count);
    }
};