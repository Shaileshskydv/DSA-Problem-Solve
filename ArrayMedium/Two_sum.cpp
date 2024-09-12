#include <iostream>
#include <vector>
#include <map>
using namespace std;

// BRUTE CASE

// int TwoSum(vector<int>&a,int k){
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=a[i]+a[j+1];
//             if(sum==k){
//                 cout<<a[i]<<" + "<<a[j+1];
//                 return sum;
//             }
//         }
//     }
//     return -1;
// }

// BETTER CASE

// int TwoSum(vector<int>&a,int k){
//     int n=a.size();
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         int book=a[i];
//         int more=k-book;
//         if(mpp.find(more)!=mpp.end()){
//             return true;
//         }
//         mpp[book]=i;
//     }
//     return -1;
// }

//OPTIMAL CASE

int TwoSum(vector<int>&a,int k){
    int n=a.size(); 
    int left=0,right=n-1;
    sort(a.begin(),a.end());
    while(left<right){
        int sum=a[left]+a[right];
        if(sum==k){
            return true;
        }
        else{
            if(sum<k){
                left++;
            }else{
                right--;
            }
        }
    }
}

int main() {
    vector<int> a = {2,6,5,8,11};
    int k = 14;
    int result = TwoSum(a,k);
    if (result > 0) {
        cout <<"yes";
    } else {
        cout <<"no";
    }
    return 0;
}