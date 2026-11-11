class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
      int freq[26]={0};
      for(int i=0;i<s.length();i++){
          freq[s[i]-'a']++;
      }
      int maxfreq=0;
      char ans='a';
      for(int i=0;i<26;i++){
          if(freq[i]>maxfreq){
              maxfreq=freq[i];
              ans='a'+i;
          }
      }
      return ans;
    }
};
