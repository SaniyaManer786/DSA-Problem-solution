
#include <iostream>
#include<vector>
using namespace std;

int LargestElement(vector<int>& arr){
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
           
            largest=arr[i];
        }
      
    }
    return largest;
}
int main()
{
  vector<int>arr={1,4,2,6,5,7};
  cout<<LargestElement(arr)<<endl;

    return 0;
}
