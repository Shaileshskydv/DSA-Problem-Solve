#include<iostream>
#include<vector>
using namespace std;

// target subsequence all

// void target(int ind,vector<int> &ds,int arr[],int n,int sum,int tar){
//     if(ind==n){
//         if(sum==tar){
//             for(auto it:ds)
//                 cout<<it<<" ";
//                 cout<<endl;
//         } return;  
//     }
//     ds.push_back(arr[ind]);
//     sum+=arr[ind];
//     target(ind+1,ds,arr,n,sum,tar);
//     sum-=arr[ind];
//     ds.pop_back();
//     target(ind+1,ds,arr,n,sum,tar);
// }

// only retrun sum == tar single

void target(int ind,vector<int> &ds,int arr[],int n,int sum,int tar,int cnt){
    if(ind==n){
        if(sum==tar){
            cnt++;
        } cout<<cnt;
        return;  
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    target(ind+1,ds,arr,n,sum,tar,cnt);
    sum-=arr[ind];
    ds.pop_back();
    target(ind+1,ds,arr,n,sum,tar,cnt);
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=0;
    int tar=2;
    int cnt =0;
    vector<int>ds;
    target(0,ds,arr,n,sum,tar,cnt);
}

