class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
    int m=nums1.size();
    int n=nums2.size();

    vector<vector<int>> arr(m+1,vector<int>(n+1));
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }
            else if(nums1[i-1]==nums2[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
            }else{
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    return arr[m][n];
    }
};