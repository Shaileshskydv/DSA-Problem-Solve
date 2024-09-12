#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int BuySell(vector<int>&a){
    int n = a.size();
    int mini=a[0];
    int max_profit=0;
        for(int i=1;i<n;i++){
            int cost=a[i]-mini;
            max_profit=max(max_profit,cost);
            mini=min(mini,a[i]);
    }return max_profit;
}
int main(){
    vector<int> a = {7,1,5,3,6,4};
    int result=BuySell(a);
    if(result>0){
        cout<<result;
    }else{
        cout<<"No";
    }
    return 0;
}