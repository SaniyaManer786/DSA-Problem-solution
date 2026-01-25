
// by sum of n natural number
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



// by bitwise operator

#include <iostream>
#include<vector>
using namespace std;
int missing(vector<int>&a){
    int N=a.size();
    int xor1=0,xor2=0;
    int n=N- 1;
    for(int i=0;i<n;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+ 1);
    }
    xor1=xor1^N;
    return xor1^xor2;
}

int main()
{
   vector<int>a={1,2,4,5,6};
   int N;
   cout<<missing(a)<<endl;;

    return 0;
}
