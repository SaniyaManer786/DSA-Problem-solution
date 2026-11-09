class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int>freq;
        for(char x:s){
            freq[x]++;
        }
        for(char x:s){
            if(freq[x]==1){
                return x;
            }
        }
        return '$';
    
    }
};

