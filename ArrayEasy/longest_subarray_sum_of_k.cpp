
#include <iostream>
#include <vector>
#include<map>
using namespace std;

// BRUTE CASE

// int subarrsum(vector<int>& arr, int k) {
//     int n = arr.size();
//     int maxi = 0;
//     for (int i = 0; i < n; i++) {
//         int cnt = 0;
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += arr[j];
//             if (sum == k) {
//                 cnt++;
//             }
//             maxi = max(maxi, cnt);
//         }
//     }
//     return maxi;
// }

// BETTER CASE and optimal case for negative Question only

// int subarrsum(vector<int> v, int k) {
//     int n = v.size();
//     map<int, int> PreSumMap;
//     int maxlen = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += v[i];
//         if (sum == k) {
//             maxlen = max(maxlen, i + 1);
//         }
//         int rem = sum - k;
//         if (PreSumMap.find(rem) != PreSumMap.end()) {
//             int len = i - PreSumMap[rem];
//             maxlen = max(maxlen, len);
//         }
//         if(PreSumMap.find(sum)==PreSumMap.end()){
//             PreSumMap[sum] = i;
//         }
       
//     }
//     return maxlen;
// }

// OPTIMAL CASE

int subarrsum(vector<int>&a,int k){
    int left=0,right=0;
    int sum=0;
    int maxlen=0;
    int n=a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }    
    }return maxlen;
}

int main() {
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;
    int result = subarrsum(v, k);
    if (result > 0) {
        cout << "Target sum " << k << " is found in " << result << " subarrays." << endl;
    } else {
        cout << "Target sum " << k << " is not found." << endl;
    }
    return 0;
}