class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) return false;

        int first = -1, second = -1;
        int diffCount = 0;
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            // Count mismatches
            if (s[i] != goal[i]) {
                diffCount++;
                if (diffCount == 1) first = i;
                else if (diffCount == 2) second = i;
                else return false;  // More than 2 mismatches
            }

            // Count frequency (for duplicate check)
            freq[s[i] - 'a']++;
        }

        // Case 1: Exactly 2 mismatches → check cross match
        if (diffCount == 2) {
            return s[first] == goal[second] &&
                   s[second] == goal[first];
        }

        // Case 2: No mismatches → need duplicate character
        if (diffCount == 0) {
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 1) return true;
            }
        }

        return false;
    }
};
