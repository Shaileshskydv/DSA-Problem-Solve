#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void linearsearch(vector<int>&arr,int n,int d){
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            cout<<i;
            break;
        }
    }
}




int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    linearsearch(arr,n,d);

    return 0;
}