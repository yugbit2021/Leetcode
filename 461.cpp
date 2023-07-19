#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> decimalToBinary(int decimal) {
    vector<int> binary;
    
    while (decimal > 0) {
        binary.insert(binary.begin(), decimal % 2);
        decimal /= 2;
    }
    
    return binary;
}

int main(){
    int a=4;
    cout<<convertintobinary(a);
}