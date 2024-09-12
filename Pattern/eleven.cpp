#include<iostream>
using namespace std;
int start=1;
void print1(){
    for(int i=0;i<5;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }cout<<endl;
    }
}
int main(){
    print1();
}