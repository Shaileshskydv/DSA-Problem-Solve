#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// better case

void missing_num(vector<int> &a,int n1){
    int hash[5] = {0};
    for(int i=0;i<n1;i++){
            hash[a[i]] = 1;
    }
    for(int i=1;i<n1;i++){
        if(hash[i]==0){
            cout<<i<<" ";
        }
    }

}

// optimal case


// not correct optimal case

// void missing_num(vector<int> &a,int n){
//     int xor1=0, xor2=0;
//     int N=n-1;
//     for(int i=0;i<n;i++){
//         xor2=xor2^a[i];
//         xor1=xor1^(i+1);
//     }
//     xor1=xor1^n;
//     int ans=xor1^xor2;
//     cout<<ans<<" ";
    
    
// }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    missing_num(arr,n);
}
