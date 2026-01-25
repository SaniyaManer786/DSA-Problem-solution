#include <iostream>
#include<vector>
using namespace std;
int missing(vector<int>& nums){
    int n=nums.size()+ 1;
    int sum1=n*(n+ 1)/2;
    int sum2=0;
    for(int i=0;i<nums.size()+ 1;i++){
        sum2=sum2+nums[i];
    
    }

    int result=sum1-sum2;
    return result;
}

int main()
{
   vector<int>nums={1,2,4,5,6};
   int n;
   cout<<missing(nums)<<endl;;

    return 0;
}
