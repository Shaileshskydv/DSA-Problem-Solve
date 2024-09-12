#include<iostream>
using namespace std;

void print1(int i,int n){
    if(i>n){
        return;
    }else{
        cout<<"shailesh"<<endl;
        print1(i+1,n);
    }
     
    }

int main(){
    int n;
    int i=1;
    cin>>n;
    print1(i,n);
}