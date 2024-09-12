#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
       cout<<mpp[arr[i]];
    }
    int maxfreq=0;
    int maxfreqelement=0;
    for(auto &it: mpp){
        if(it.second>maxfreq or (it.second==maxfreq and it.first<maxfreqelement)){
            maxfreq=it.second;
            maxfreqelement=it.first;
        }
    }
   int minfreq=INT_MAX;
   int minfreqelement=0;
   for(auto &it : mpp){
        if(it.second<minfreq or (it.second==minfreq and it.first<minfreqelement)){
            minfreq=it.second;
            minfreqelement=it.first;
        }
   }    
    cout<<maxfreqelement<<minfreqelement;
}
    