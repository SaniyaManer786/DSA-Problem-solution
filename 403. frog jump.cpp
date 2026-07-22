class Solution {
public:
    unordered_map<long long, bool> dp;
    unordered_map<int, int> pos;

    bool f(int ind, int jump, vector<int>& stones) {
        if (ind == stones.size() - 1)
            return true;

        long long key = ((long long)ind << 32) | jump;
        if (dp.find(key) != dp.end())
            return dp[key];

        for (int nextJump = jump - 1; nextJump <= jump + 1; nextJump++) {
            if (nextJump <= 0)
                continue;

            int nextStone = stones[ind] + nextJump;

            if (pos.find(nextStone) != pos.end()) {
                if (f(pos[nextStone], nextJump, stones))
                    return dp[key] = true;
            }
        }

        return dp[key] = false;
    }

    bool canCross(vector<int>& stones) {
        int n = stones.size();

        for (int i = 0; i < n; i++)
            pos[stones[i]] = i;

        return f(0, 0, stones);
    }
};
