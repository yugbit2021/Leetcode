#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n,0));
        int startrow=0;
        int endrow=n-1;
        int startcol=0;
        int endcol=n-1;
        int current_num=1;
       

        while(startrow<=endrow && startcol<=endcol){

            // for first row;
             
            
            for(int i=startcol;i<=endcol;i++){
                v[startrow][i]=current_num;
                current_num++;
            }
            startrow++;

            for(int j=startrow;j<=endrow;j++){
                 v[j][endcol]=current_num;
                current_num++;
            }
            endcol--;

            if(startrow<=endrow){
                for(int k=endcol;k>=startcol;k--){
                    v[endrow][k]=current_num;
                current_num++;
                }
                endrow--;
            }

            if(startcol<=endcol){
                for(int l=endrow;l>=startrow;l--){
                    v[l][startcol]=current_num;
                current_num++;
                }
                startcol++;
            }

        }
        return v;
    }

    int main(){
        vector<vector<int>> ans = generateMatrix(4);
        for(int i=0;i<4;i++){
           for(int j=0;j<4;j++){
                cout<<ans[i][j]<<" ";
           }
        }
    }