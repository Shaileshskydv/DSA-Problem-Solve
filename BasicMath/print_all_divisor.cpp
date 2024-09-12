#include<iostream>
using namespace std;
void print1(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";

        }
    }
}
int main(){
    print1();
}