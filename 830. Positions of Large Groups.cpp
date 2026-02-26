class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n=s.length();
        int start=0;
          vector<vector<int>>result;
        for(int end=0;end<n;end++){
            if(end==n-1 || s[end]!=s[end+1]){
           if(end-start+1>=3){
        
             result.push_back({start,end});
        }
    
       start=end+1;
            }
    }
    return result;

    }
};
