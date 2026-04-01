#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int SecondLargest(vector<int>& arr) {
    int largest = arr[0];
    int slargest = INT_MIN;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int SecondSmallest(vector<int>& arr) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main() {
    vector<int> arr = {1, 4, 2, 6, 5, 7};

    int slargest = SecondLargest(arr);
    int ssmallest = SecondSmallest(arr);

    cout << "Second Largest: " << slargest << endl;
    cout << "Second Smallest: " << ssmallest << endl;

    return 0;
}
