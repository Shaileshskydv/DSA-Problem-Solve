#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void intersection_arr(vector<int> &a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>intersectionarr;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }else{
            if(a[i]>b[j]){
                j++;
            }
            else{
                intersectionarr.push_back(a[i]);
                i++;
                j++;
            }
        }
    }
    for(int i=0;i<intersectionarr.size();i++){
        cout<<intersectionarr[i]<<" ";
    }
}
int main(){
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<" enter secod array size \n";
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    intersection_arr(arr1,arr2);

}