//sorting
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
          int duplicate=-1;
          int missing=1;
          int n=nums.size();

          for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
            duplicate=nums[i];
            }
         }
         
           int total=n*(n+1)/2;
           int sum=0;
         for(int i=0;i<n;i++){
             sum+=nums[i];
            missing=total-(sum-duplicate);
         }
            
         return {duplicate,missing};   
    }
};

//bit manipulation

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int xorAll = 0;

        // XOR all numbers from 1 to n and array elements
        for (int i = 0; i < n; i++) {
            xorAll ^= nums[i];
            xorAll ^= (i + 1);
        }

        // xorAll = missing ^ duplicate
        int rightMostBit = xorAll & -xorAll;

        int group1 = 0, group2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] & rightMostBit)
                group1 ^= nums[i];
            else
                group2 ^= nums[i];

            if ((i + 1) & rightMostBit)
                group1 ^= (i + 1);
            else
                group2 ^= (i + 1);
        }

        // Now group1 and group2 are missing and duplicate
        for (int num : nums) {
            if (num == group1)
                return {group1, group2}; // duplicate, missing
        }

        return {group2, group1};
    }
};


//hash table


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
       
          unordered_map<int,int> mpp;

          for(int i=0;i<n;i++){
            mpp[nums[i]]++;
          }
        int duplicate=-1;
        int missing=-1;
           
        for(int i=0;i<=n;i++){
            
            if(mpp[i]==2){
                duplicate=i;
            }
            if(mpp[i]==0){
                missing=i;
            }
        }
        return{duplicate,missing};
    }
};
