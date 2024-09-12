#include<iostream>
using namespace std;
void print1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
    for(int k=0;k<5;k++){
        for(int j=0;j<k;j++){
            cout<<" ";
        }
        for(int j=0;j<2*5-(2*k+1);j++){
            cout<<"*";
        }
        for(int j=0;j<k;j++){
            cout<<" ";
        }cout<<endl;
    }
}

int main(){
    print1();
}