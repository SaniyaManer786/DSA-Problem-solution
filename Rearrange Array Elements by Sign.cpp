class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int positiveIdx=0, negativeIdx=1;
        for(int i=0;i<n;i++){
          if(nums[i]<0){
            ans[negativeIdx]=nums[i];
            negativeIdx+=2;
          }else{
            ans[positiveIdx]=nums[i];
            positiveIdx+=2;
          }
        }
        return ans;
    }
};
