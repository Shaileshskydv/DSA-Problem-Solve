#include<iostream>
using namespace std;
bool fun(int i,string s,int n){
    if(i>=n/2)
        return true;
    if (s[i]!=s[n-i-1])
        return false;

    return fun(i+1,s,n);
        
    
}
int main(){
    string s="madam";
    int n = s.length();
    cout<<fun(0,s,n);

}