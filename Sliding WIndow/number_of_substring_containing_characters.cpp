class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0, count = 0;
        vector<int> freq(3, 0); // Frequency of 'a', 'b', 'c' assigning with zero.
        
        for (int right = 0; right < s.size(); ++right) {
            freq[s[right] - 'a']++;
            
            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                count += s.size() - right; // Every valid substring from [left, right] contributes
                freq[s[left] - 'a']--;
                left++; // Shrink window
            }
        }
        return count;
    }
};
