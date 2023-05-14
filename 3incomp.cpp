#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "pwwkew";
    vector<char> v;
    
    for(int i=0;i<s.size();i++){        
        for(int j=0;j<v.size();j++){
            if(i==0){
                v.push_back(s[i]);
            }
            else if(s[i+1]!=v[j]){
                v.push_back(s[i+1]);
            }
        }
    }

      
}