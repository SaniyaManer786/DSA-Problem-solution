class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        
        string word;
        
        for (int i = 0; i < paragraph.size(); i++) {
            
            char c = tolower(paragraph[i]);
            
            if (isalpha(c)) {
                word += c;
            } else {
                if (!word.empty()) {
                    if (!ban.count(word)) {
                        freq[word]++;
                    }
                    word.clear();
                }
            }
        }
        
        // Handle last word
        if (!word.empty() && !ban.count(word)) {
            freq[word]++;
        }
        
        string ans;
        int maxCount = 0;
        
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                ans = p.first;
            }
        }
        
        return ans;
    }
};
