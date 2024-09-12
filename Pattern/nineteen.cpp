#include<iostream>
using namespace std;
void print1(){
    int inis=0;
   for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }inis+=2;
        cout<<endl;
   }
   int inist = 8;
   for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<inist;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        inist-=2;
        cout<<endl;
   }
}
int main(){
    print1();
}