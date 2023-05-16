class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int sum=0;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum=sum+matrix[i][j];
                }
            }
        }
         for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if(i+j ==n-1){
                    sum=sum+matrix[i][j];
                }
            }
        }
        if(n%2 !=0){
            sum=sum-matrix[n/2][n/2];
        }else{
            return sum;
        }
        return sum;
    }
};