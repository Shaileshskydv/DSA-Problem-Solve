#include<iostream>
using namespace std;
void print1(){
    for(int i=0;i<5;i++){
     
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
         
        }char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
            
        }for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
}
int main(){
    print1();
}