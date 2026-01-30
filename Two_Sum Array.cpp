// brute force approch
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int result=nums[i]+nums[j];
            if(result==target){
                return {i,j};
            }
            }
        }
        return {};
       } 
    
};

// better approach
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        map<int,int>map;
        
        for(int i=0;i<arr.size();i++){
        int a=arr[i];
        int more=target-a;
        if(map.find(more)!=map.end()){
       
            return true;
            // return (map(more),i)
        }
        
        map[a]=i;
        }
        return false;
        
    }
};
// optimal using sorting

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int right=n-1;
        int left=0;
        sort(arr.begin(),arr.end());
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return true;
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
            return false;
        }
};
