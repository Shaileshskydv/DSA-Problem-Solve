#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

//brute case

// int find_num_ones(int a[], int n){
//     for(int i=0; i<n; i++){
//         int num = a[i];
//         int cnt = 0;
//         for(int j=0; j<n; j++){
//             if(a[j] == num)
//                 cnt++;
//         }
//         if(cnt == 1){
//             return num;
//         }
//     }
//     return -1; 
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int result = find_num_ones(arr, n);
//     if(result!= -1)
//         cout << "Number with single occurrence is: " << result << endl;
//     else
//         cout << "No number with single occurrence found." << endl;
//     return 0;
// }

//better case

// void find_num_ones(int a[], int n){
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[a[i]]++;
//     }
//     for(int i=0;i<mpp.size();i++){
//         if(mpp[i]==1){

//         cout<<i<<" ";

//         }
//     }

    
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     find_num_ones(arr, n);
//     return 0;
// }

// optimal case

int find_num_ones(vector<int> &arr,int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    return xor1;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int result=find_num_ones(arr, n);
    cout<<result<<" ";
    
    return 0;
}