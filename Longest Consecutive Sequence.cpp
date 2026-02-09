//better approch
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
       int count=0;
       int lastsmaller=INT_MIN;
       int longest=1;
       for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmaller){
            count++;
            lastsmaller=nums[i];
        }else if(lastsmaller!=nums[i]){
            count=1;
            lastsmaller=nums[i];
        }
        longest=max(longest,count);
       }
       return longest;
    }
};

// optimal approch
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int n=nums.size();
       int longest=1;
       unordered_set<int>st;
       for(int i=0;i<n;i++){
        st.insert(nums[i]);
       }
       for(auto it: st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
        while(st.find(x+1)!=st.end()){
            x=x + 1;
            count++;
        }
    
        longest=max(longest,count);
       }
       }
       return longest;
    }
};
