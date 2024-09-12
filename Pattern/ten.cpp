 #include<iostream>
 using namespace std;
void print1(){
    for(int i=0;i<2*5-1;i++){
        int start=i;
        if(i>5) start=2*5-i;
        for(int j=0;j<start;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(){
    print1();
}