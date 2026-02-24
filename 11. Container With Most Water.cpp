class Solution {
public:
    int maxArea(vector<int>& height) {
          int n=height.size();
          int maxwater=0;
          int left=0;
          int right=n-1;
            while(left<right){
                int wt=right-left;
                int ht=min(height[right],height[left]);
                int currwt=wt*ht;
                maxwater=max(maxwater,currwt);
                height[left]<height[right] ? left++ :right--;
            }
            return maxwater;
    }
};
