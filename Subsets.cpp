class Solution {
  public:
  void getAllSubstes(vector<int>& arr,vector<int>& ans,int i, vector<vector<int>>& allSubsets){
      if(i==arr.size()){
          allSubsets.push_back({ans});
          return ;
      }
      ans.push_back(arr[i]);
      getAllSubstes(arr,ans,i+1,allSubsets);
      
      ans.pop_back();
        getAllSubstes(arr,ans,i+1,allSubsets);
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>allSubsets;
        vector<int>ans;
        
        getAllSubstes(arr,ans,0,allSubsets);
        return allSubsets;
        
    }
};
