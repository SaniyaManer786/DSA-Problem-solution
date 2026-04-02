class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long maxsum=LONG_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
                sum+=nums[i];
                maxsum=max(sum,maxsum);
                 if(sum<0){
                    sum=0;
            }
        }
        return maxsum;
    }
};
