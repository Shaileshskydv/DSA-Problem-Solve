#include<iostream>
#include<vector>
using namespace std;
void remove_duplicate(vector<int> &arr,int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            
        }else{
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    remove_duplicate(arr,n);
    
}