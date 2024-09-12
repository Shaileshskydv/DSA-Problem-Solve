#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// void union_arr(vector<int> &a,vector<int>b){
//    int n1=a.size();
//    int n2=b.size();
//    set<int> st;
//    for(int i=0;i<n1;i++){
//         st.insert(a[i]);
//    }
//    for(int i=0;i<n2;i++){
//         st.insert(b[i]);
//    }
//    vector<int>temp;
//     for(auto it : st){
//         temp.push_back(it);
//     }
  
   
// }

// int main(){
//     int n1,n2;
//     cin>>n1;
//     vector<int> arr1(n1);
//     for(int i=0;i<n1;i++){
//         cin>>arr1[i];
//     }
//     cout<<" enter secod array size \n";
//     cin>>n2;
//     vector<int> arr2(n2);
//     for(int i=0;i<n2;i++){
//         cin>>arr2[i];
//     }

//     union_arr(arr1,arr2);
//     for(int i=0;i<n1;i++){
//         cout<<arr1[i]<<" ";
//     }

// }

// optimal case

void union_arr(vector<int> &a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>unionarr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()== 0 || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }else {
            if(unionarr.size()==0 || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++; 
        }
    }
    while(j<n2){
         if(unionarr.size()==0 || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
        if(unionarr.size()== 0 || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
    }
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
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

    union_arr(arr1,arr2);

}
