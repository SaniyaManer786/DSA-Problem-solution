#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int LongestSubarrayWithSumK(vector<int>& arr ,long long k) {
int left=0;
int right=0;
long long sum=arr[0];
int maxlen=0;
int n=arr.size();
while(right<n){
    while(left<=right && sum>k){
        sum-=arr[left];
        left++;
    }
    if(sum==k){
        maxlen=max(maxlen,right-left + 1);
    }
    right++;
    if(right<n){
    sum+=arr[right];
    }
}
return maxlen;
 }
int main() {
    vector<int> arr = {1,1,4,3,2,5,1,3,1,6};
      int k;
      cin>>k;

    cout << "Longest Subarray With Sum K: " << LongestSubarrayWithSumK (arr,k)<< endl;
   

    return 0;
}
