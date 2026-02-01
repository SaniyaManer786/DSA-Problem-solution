// brute forece approch
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
     int n=arr.size();
     for(int i=0;i<n;i++){
         int count=0;
         for(int j=0;j<n;j++){
             if(arr[j]==arr[i]){
                 count++;
             }
         }
         if(count>=n/2){
             return arr[i];
         }
     }
        
    }
};

// better approach
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
     int n=arr.size();
     map<int,int>freq;
     for(int i=0;i<n;i++){
            freq[arr[i]]++;
         if(freq[arr[i]]>n/2){
             return arr[i];
         }
     }
     return -1;
    }
};


// Moore's Voting Algorithm
// if majority exist is gurentted
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(int i=0;i<nums.size();i++){
          if(count==0)
          candidate=nums[i];
          if(nums[i]==candidate)
          count++;
          else
          count--;
        }
        return candidate;
    }
};



// if majority exist is not  gurentted

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        // Step 1: Find candidate
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0)
                candidate = nums[i];

            if (nums[i] == candidate)
                count++;
            else
                count--;
        }

        // Step 2: Verify candidate
        count = 0;
        for (int x : nums) {
            if (x == candidate)
                count++;
        }

        if (count > nums.size() / 2)
            return candidate;
        else
            return -1;
    }
};


