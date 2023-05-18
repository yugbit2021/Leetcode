class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        int sum=0;
        for(int i=2;i<n;i++){
            if(v[i]%3==0){
                sum=sum+v[i];
            }
             else if(v[i]%5==0){
                sum=sum+v[i];
            }
             else if(v[i]%7==0){
                sum=sum+v[i];
            }
        }
        return sum;
    }
};