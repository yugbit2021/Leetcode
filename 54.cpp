#include<iostream>
#include<vector>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> s;
        int sr=0;
        int sc=0;
        int er=matrix.size()-1;
        int ec=matrix[0].size()-1;

        while(sc<=ec && sr<=er){

        for(int i=sc;i<=ec;i++){
            s.push_back(matrix[sr][i]);
        }
        sr++;
        for(int j=sr;j<=er;j++){
            s.push_back(matrix[j][ec]);
        }
        ec--;
        if(sr<=er){
        for(int k=ec;k>=sc;k--){
            s.push_back(matrix[er][k]);
        }
        er--;
        }
        if(sc<=ec){
            for(int l=er;l>=sr;l--){
            s.push_back(matrix[l][sc]);
        }
        sc++;
 }
 }
 return s;
    }

    int main(){
        vector<vector<int>> s={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        vector<int> ans= spiralOrder(s);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        
    }