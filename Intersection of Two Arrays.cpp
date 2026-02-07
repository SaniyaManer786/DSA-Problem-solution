class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;
        vector<int> ans;

        // store nums1 elements
        for(int num : nums1){
            mp[num] = 1;
        }

        // check nums2
        for(int num : nums2){
            if(mp[num] == 1){
                ans.push_back(num);
                mp[num] = 0;   // avoid duplicate insertion
            }
        }

        return ans;
    }
};
