#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// BRUTE CASE

// int MajorityElement(int a[7]){
//     for(int i=0;i<7;i++){
//         int cnt=0;
//         for(int j=0;j<7;j++){
//             if(a[i]==a[j]){
//                 cnt++;
//             }
//         }if(cnt>7/2){
//             return a[i];
//         }
//     }return -1;
// }

// BETTER CASE

// int MajorityElement(vector<int>& nums) {
//         map<int, int> mpp;
//         for (int i = 0; i < nums.size(); i++) {
//             mpp[nums[i]]++;
//         }
//         for (auto it : mpp) {
//             if (it.second > (nums.size()) / 2) {
//                 return it.first;
//             }
//         }
//     return -1; 
// }

//OPTIMAL CASE

    int MajorityElement(vector<int>& nums) {
       int cnt=0;
       int ele;
       for(int i=0;i<nums.size();i++){
        if(cnt==0){
            cnt=1;
            ele=nums[i];
        }else if(nums[i]==ele){
            cnt++;
        }else {
            cnt--;
        }
       }
       int cnt1=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt++;
            }
        if(cnt>(nums.size())/2){
            return ele;
        }
       }
    return -1; 
}

int main(){
    vector<int> a = {2,2,3,3,1,2,2};
    int result = MajorityElement(a);
    if(result>0){
        cout<<result;
    }else{
        cout<<"No";
    }
    return 0;
}
