#include<iostream>
using namespace std;
void print1(){
  int n;
  cin>>n;
  int temp=0;
  int m=n;
  while(n>0){
    int last_digit=n%10;
    n=n/10;
    temp=(temp*10)+last_digit;
  }
  if(temp==m){
    cout<<"it is a palindrome number";
  }else{
    cout<<temp;
    cout<<"it is not a palindrome number";
  }
}
int main(){
    print1();
}
