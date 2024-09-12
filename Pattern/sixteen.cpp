#include<iostream>
using namespace std;
void print1(){
   for(int i=1;i<5;i++){
    char ch='A'+i;
    for(int j=0;j<=i;j++){
        cout<<ch;
    }cout<<endl;
   }
}
int main(){
    print1();
}