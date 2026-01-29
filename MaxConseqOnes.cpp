#include <iostream>
#include<vector>
using namespace std;

int MaxConsqOnes(vector<int>& arr){
    int maximum=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            maximum=max(count,maximum);
        }else{
            count=0;
        }
        
    }
    return maximum;
}
int main()
{
  vector<int>arr={1,1,0,1,1,1,0,0,1,1};
  cout<<MaxConsqOnes(arr)<<endl;

    return 0;
}
