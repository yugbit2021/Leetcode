#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

 bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int ans=arr[1]-arr[0];

        for(int i=1;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==ans){
                return true;
            }
        }
        return false;
    }
int main(){
    int arr[]={5,1,3};
    cout<<canMakeArithmeticProgression(arr);
}