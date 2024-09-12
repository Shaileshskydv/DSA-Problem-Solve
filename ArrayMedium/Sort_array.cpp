// only 0 1 2
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// BRUTE CASE

void SortArray(vector<int>&a){
    int n=a.size();
    int cnt=0,cnt1=1,cnt2=2;
    for(int i=0;i<n;i++){
       if(a[i]==0){
        cnt++;
       }
       else if(a[i]==1){
        cnt1++;
       }else cnt2++;
    }   
    for(int i=0;i<cnt;i++){
        a[i]=0;
    }
    for(int i=cnt;i<cnt+cnt1;i++){
        a[i]=1;
    } 
    for(int i=cnt+cnt2;i<n;i++){
        a[i]=2;
    }
}

// OPTIMAL CASE

void SortArray(vector<int>&a){
    int n=a.size();
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }else if(a[mid]==1){
            mid++;
            
        }else(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }
    }
}

int main(){
    vector<int> a = {0,1,2,0,1,2,1,2,0,0,1};
    SortArray(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}


