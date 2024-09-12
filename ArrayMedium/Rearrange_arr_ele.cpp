#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

//BRUTE CASE

// vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> pos,neg;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 pos.push_back(nums[i]);
//             }else{
//                 neg.push_back(nums[i]);
//             }
//         }
//         for(int i=0;i<n/2;i++){
//             nums[2*i]=pos[i];
//             nums[2*i+1]=neg[i];
//         }
//         return nums;
// }

// OPTIMAL CASE

    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);
        int posIndex=0,negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;
}


// Other case not equal positve and negative element  in array

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos,neg;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            nums[index]=neg[i];
            index++;
        } 
    }return nums;
}

int main(){
    vector<int> num = {3,1,-2,-5,2,-4};
    vector<int> result = rearrangeArray(num);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
        }
}