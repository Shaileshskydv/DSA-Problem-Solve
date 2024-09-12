#include<iostream>
using namespace std;
void print1(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int last_digit=n%10;
            
        n=n/10;
        reverse=(reverse*10)+last_digit;
    }    
    cout<<reverse;
}
int main(){
    print1();
}


    