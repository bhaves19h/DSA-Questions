class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for(char c : text) {
            freq[c]++;
        }
        // Word we want to form
        string balloon = "balloon";

        // Track how many times we can form balloon
        int ans = INT_MAX;
        for(char c : balloon) {
            if(c == 'l' || c == 'o') {
                ans = min(ans, freq[c] / 2);  // need 2 'l' and 2 'o'
            } else {
                ans = min(ans, freq[c]);
            }
        }

        return ans;
    }
};
