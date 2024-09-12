#include<iostream>
#include<vector>
using namespace std;

void second_smallest(vector<int> &arr,int n){
    int smallest=arr[0];
    int s_smallest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            s_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<s_smallest){
            s_smallest=arr[i];
        }
    }
    cout<<s_smallest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    second_smallest(arr,n);
   
}