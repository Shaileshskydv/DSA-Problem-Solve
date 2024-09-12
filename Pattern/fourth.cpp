#include<iostream>
using namespace std;
void print1(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    print1();
}