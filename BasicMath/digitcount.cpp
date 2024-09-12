#include<iostream>
using namespace std;
void print1(){
    int count=0;
    int n;
    cout<<"enter your number";
    cin>>n;
    while(n>0){
        int last_digit=n%10;
        count+=1;
        n=n/10;
    }
    cout<<count;
}
int main(){
    print1();
}

// one more solution

int main(){
    int n;
    cin>>n;
    int cnt = (int)(log10(n)+1);
    cout<<cnt;
}