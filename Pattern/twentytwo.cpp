#include<iostream>
using namespace std;
void print1(){
    // for(int i=0;i<7;i++){
        
    //     for(int j=0;j<7;j++){
    //         if(i==0 || i==7-1 || j==0 || j==7-1)
    //             {
    //                 cout<<4;
    //             }
    //        else if (i==1 || i==6-1 || j==1 || j==6-1)
    //        {
    //             cout<<3;
    //        }
    //        else if (i==2 || i==5-1 || j==2 || j==5-1)
    //        {
    //             cout<<2;
    //        }
           
    //        else cout<<"1";
    //     }   
    //     cout<<endl;
    // } 




    // second code 

        
    for(int i=0;i<2*4-1;i++){
        for(int j=0;j<2*4-1;j++){
            int top=i;
            int left=j;
            int right=(2*4-2)-j;
            int bottom=(2*4-2)-i;
            
            cout<<(4-min(min(top,bottom),min(left,right)));
        }cout<<endl;
    }
}
int main(){
    print1();
}