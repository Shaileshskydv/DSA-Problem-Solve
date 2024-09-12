#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void maximum_cons_one(vector<int>&a){
    int max=0;
    int cnt=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt+=1;
            if(cnt>max){
                max=cnt;
            }
        }else{
            cnt=0;
        }

    }
    cout<<max<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maximum_cons_one(arr);
}