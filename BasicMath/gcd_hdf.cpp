#include<iostream>
using namespace std;
void print1(){
  int a,b;
  cout<<"enter a number 1 : ";
  cin>>a;
  cout<<"enter a number 2 : ";
  cin>>b;
  while(a>0 && b>0){
    if(a>b) 
        a=a%b;
    else if(b>a){
        b=b%a;
    }
  }
  if(a==0){
    cout<<b;
  }else{
    cout<<a;
  }

}
int main(){
    print1();
}