#include<iostream>
#include<vector>
using namespace std;
void second_largest(vector<int> &arr,int n){
    int largest=arr[0];
    int s_largest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            s_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>s_largest){
            s_largest=arr[i];
        }
    }
    cout<<s_largest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    second_largest(arr,n);
   
}