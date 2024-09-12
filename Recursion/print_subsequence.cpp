#include<iostream>
#include<vector>
using namespace std;


int subsequence(int ind,vector<int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds,arr,n);
    ds.pop_back();
    subsequence(ind+1,ds,arr,n);

}
int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int>ds;
    subsequence(0,ds,arr,n);
}
