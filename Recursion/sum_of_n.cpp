#include<iostream>
using namespace std;
int sum=0;
void fun(int n){
   
    if(n<0){
        return;
    }
    else{
       sum+=n;
        n--;
        fun(n);
        
        
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
    cout<<sum;
}