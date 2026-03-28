class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int count = 0;

        for (char c : s) {
            if (st.count(c)) {
                count += 2;   // pair found
                st.erase(c);  // remove from set
            } else {
                st.insert(c); // store unmatched
            }
        }

        // if any character is left, we can place one in center
        if (!st.empty()) count += 1;

        return count;
    }
};
