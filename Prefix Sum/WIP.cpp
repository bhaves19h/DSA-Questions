class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();
        vector<int> prefixSum(n, 0);
        if (hours[0] > 8) {
            prefixSum[0] = 1;
        } else {
            prefixSum[0] = -1;
        }
        for (int i = 1; i < n; i++) {
            if (hours[i] > 8) {
                prefixSum[i] = prefixSum[i - 1] + 1;
            } else {
                prefixSum[i] = prefixSum[i - 1] - 1;
            }
        }
        unordered_map<int, int> mp;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {

            // case 1: whole prefix is valid
            if (prefixSum[i] > 0) {
                maxLen = i + 1;
            } else {
                // case 2: check if (sum-1) seen before
                if (mp.find(prefixSum[i] - 1) != mp.end()) {
                    maxLen = max(maxLen, i - mp[prefixSum[i] - 1]);
                }
            }

            // store first occurrence only
            if (mp.find(prefixSum[i]) == mp.end()) {
                mp[prefixSum[i]] = i;
            }
        }
        return maxLen;
    }
};
