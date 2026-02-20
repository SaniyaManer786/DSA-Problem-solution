
//sorting
class Solution {
public:
    char findTheDifference(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
        int j=0;
      for(int i=0;i<s.length();i++){
        if(s[i]==t[j]){
            j++;
        }
      }
        return t[j];

    }
};


//bitwise operator

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        
        for(char c : s) {
            result ^= c;
        }
        
        for(char c : t) {
            result ^= c;
        }
        
        return result;
    }
};



//hash table


class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        // Count characters of s
        for(char c : s) {
            mp[c]++;
        }

        // Check characters of t
        for(char c : t) {
            if(mp[c] == 0) {
                return c;   // extra character found
            }
            mp[c]--;
        }

        return ' '; // fallback (won't reach here in valid input)
    }
};
