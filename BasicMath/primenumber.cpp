#include<iostream>
using namespace std;
void print1(){
    int n;
    cin>>n;
    int m=n/2+1;
    int flat=0;
    for(int i=2;i<=m;i++){
        if(n%i==0){
            flat=1;
            break;
        }
        else{
            flat=0;
            continue;
        }
    }
    if(flat==1){
        cout<<" it is not a prime number ";
    }else{
        cout<<"it is a prime number";
    }
}   
int main(){
    print1();
}