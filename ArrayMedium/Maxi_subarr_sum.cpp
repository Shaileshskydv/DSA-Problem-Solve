#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// BRUTE CASE  //BETTER CASE

// int maxiSubarrSum(vector<int>&nums){
//     int maxi=INT_MIN;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             maxi=max(sum,maxi);
//         }
        
//     }return maxi;
// }

// OPTIMAL CASE

int maxiSubarrSum(vector<int>&a){
    int n=a.size();
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0) sum=0;
    }
    return maxi;

}

int main(){
    vector<int> a = {-2,-3,4,-1,-2,1,5,-3};
    int result=maxiSubarrSum(a);
    if(result>0){
        cout<<result;
    }else{
        cout<<"No";
    }
    return 0;
}

// BETTER CASE

