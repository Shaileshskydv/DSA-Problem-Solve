#include<iostream>
using namespace std;
void print1(){
    int spaces=2*5-2;
   for(int i=1;i<2*5-1;i++){
        int stars=i;
        if(i>5) stars=2*5-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<5) spaces-=2;
        else spaces +=2;
   }
}
int main(){
    print1();
}