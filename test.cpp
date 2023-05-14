#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> circularGameLosers(int n, int k) {
        vector<int> v;
        for(int i=0;i<20;i++){
            for(int j=1;j<=n;j++){
                v.push_back(i);
            }
        }
        
        vector<int> v1;
        v1.push_back(1);
        for(int i=k;i<v.size();i+k){
            for(int j=0;j<v1.size();j++){
                if(v[k+1]!=v1[j]){
                   v1.push_back(v[k+1]); 
                }else{
                    break;
                }
            }
            
        }
        vector<int> v2;
        for(int i=2;i<=n;i++){
            
            for(int j=0;j<v1.size();j++){
              if(i!=v1[j]){
                v2.push_back(i);
            }  
            }
            
        }
        return v2;
    }

    int main(){
        vector<int> ans=circularGameLosers(5,2);
    }