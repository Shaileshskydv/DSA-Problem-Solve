#include<iostream>
using namespace std;
void print1(){
    for(int i=0;i<5;i++){
        for(char ch='A';ch<='A'+(5-i-1);ch++){
            cout<<ch;
        }cout<<endl;
    }
}
int main(){
    print1();
}