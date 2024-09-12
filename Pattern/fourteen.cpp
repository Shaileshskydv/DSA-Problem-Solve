#include<iostream>
using namespace std;
void print1(){
    for(int i =1;i<=5;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch;
        }cout<<endl;
    }
}    
int main(){
    print1();
}