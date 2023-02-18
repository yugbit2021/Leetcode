// https://leetcode.com/problems/roman-to-integer/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int romanToInt(string s) {
        const int length = s.length();
 
    // declaring character array (+1 for null terminator)
    char* arr = new char[length + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(arr, s.c_str());
     int count =0;
for (int i = 0; i < length; i++)
    {
   // switch case
switch (arr[i])
{
case 'I':
         if((arr[i+1]!='I') && arr[i+1]!='\0'){
         count=count-1;
       }
         else{
       count=count+1;
        }
        break;
case 'V':
    if((arr[i+1]=='L'|| arr[i+1]=='C'||arr[i+1]=='D'||arr[i+1]=='M'||arr[i+1]=='X') && arr[i+1]!='\0'){
    count=count-5;
}
else{
count=count+5;
}
    break;
    break;
    case 'X':
    if((arr[i+1]=='L'|| arr[i+1]=='C'||arr[i+1]=='D'||arr[i+1]=='M') && arr[i+1]!='\0'){
    count=count-10;
}
else{
count=count+10;
}
    break;
    case 'L':
       if((arr[i+1]=='C'||arr[i+1]=='D'||arr[i+1]=='M') && arr[i+1]!='\0'){
    count=count-50;
}
else{
count=count+50;
}
    break;

    case 'C':
       if((arr[i+1]=='M'||arr[i+1]=='D' ) && arr[i+1]!='\0'){
    count=count-100;
}   
else{
count=count+100;
}
    
    break;
    case 'D':
       if((arr[i+1]=='D') && arr[i+1]!='\0'){
    count=count-500;
}
else{
   count=count+500; 
}
    break;
    case 'M':
count=count+1000;

break;
}
    }
    delete[] arr;
    return count;
    }
int main(){
    string s = "DCXXI";
 
    int ans= romanToInt(s);
    cout<<ans;
 
    
   
    //delete[] char_array;
    
    return 0;
}