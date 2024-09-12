#include<iostream>
using namespace std;
void print1(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print1();
}