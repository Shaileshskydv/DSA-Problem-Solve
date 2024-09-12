#include<iostream>
using namespace std;
void print1(){
    for(int i=0;i<5;i++){
        char ch='F'-i-1;
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }cout<<endl;
    }
}
int main(){
    print1();
}