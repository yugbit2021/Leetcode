#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> ans;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                     vector<int> nums3=sort(nums2[j+1],nums2.size()-1);
//                     if(nums3[nums3.size()-1]>nums1[i]){
//                         ans.push_back(nums3[nums3.size()-1]);
//                     }
//                 }
//             }
//         }
//         return ans;
//     }

 int main(){
    vector<int> nums1={4,1,2};
    vector<int> nums2={1,3,4,2};

    // vector<int> ans = nextGreaterElement(nums1,nums2);

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    vector<int> ans = sort(nums2[1],nums2[nums2.size()-1]);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 }   