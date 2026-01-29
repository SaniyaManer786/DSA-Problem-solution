#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int removeDuplicates(vector<int>& arr) {
int i=0;

    for (int j= 1; j< arr.size(); j++) {
        if(arr[i]!=arr[j]){
            arr[i+ 1]=arr[j];
            i++;
        }
    }
    
    return i+ 1;
}


int main() {
    vector<int> arr = {1,1,2,2,3,3,3};


    cout << "Remove Duplicates: " << removeDuplicates (arr)<< endl;
   

    return 0;
}
