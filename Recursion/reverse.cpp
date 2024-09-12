#include<iostream>
using namespace std;

void print1(int n){
    if(n<=0){
        return;
    }else{
        n--;
        cout<<n<<endl;
        print1(n);
    }
     
    }

int main(){
    int n;
    cin>>n;
    print1(n);
}