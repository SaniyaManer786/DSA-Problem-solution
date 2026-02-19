class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
              int i=0;
              int j=0;
                while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }else if(nums1[i]<nums2[j]){
                    i++;
                }else{
                    j++;
                }
            }
            return ans;
    }
};






class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>map;

        for(int num:nums1){
            map[num]++;
        }

        for(int num:nums2){
            if(map[num]>0){
                result.push_back(num);
                map[num]--;
            }
        }


          return result;
    }
};
