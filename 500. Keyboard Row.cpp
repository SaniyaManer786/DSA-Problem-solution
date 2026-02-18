class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        // Map each character to its keyboard row
        unordered_map<char, int> row;

        for(char c : string("qwertyuiop"))
            row[c] = 1;
        for(char c : string("asdfghjkl"))
            row[c] = 2;
        for(char c : string("zxcvbnm"))
            row[c] = 3;

        vector<string> ans;

        for(string word : words) {

            int firstRow = row[tolower(word[0])];
            bool valid = true;

            for(char c : word) {
                if(row[tolower(c)] != firstRow) {
                    valid = false;
                    break;
                }
            }

            if(valid)
                ans.push_back(word);
        }

        return ans;
    }
};
