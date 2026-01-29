#include <iostream>
#include<vector>
using namespace std;

int NoappearsOnes(vector<int>& arr){
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr=xorr^arr[i];
        
    }
    return xorr;
}
int main()
{
  vector<int>arr={1,1,2,3,3,4,4};
  cout<<NoappearsOnes(arr)<<endl;

    return 0;
}
