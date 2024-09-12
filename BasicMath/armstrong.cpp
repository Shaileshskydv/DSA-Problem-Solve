#include<iostream>
using namespace std;
void print1(){
  int n;
  cin>>n;
  int r=0;
  int m=n;
  while(n>0){
    int last_digit=n%10;
        r+=last_digit*last_digit*last_digit;
        n=n/10;
  }
  if(r==m){
    cout<<"it is a armstrong number";
  }
  else{
    cout<<"it is not a armstrong number";
  }
}
int main(){
    print1();
}