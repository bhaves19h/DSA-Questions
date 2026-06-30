class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> last(3, -1); // last index of 'a','b','c'
        int res = 0;

        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;  // update last index of this char
            if (last[0] != -1 && last[1] != -1 && last[2] != -1) {
                res += 1 + min({last[0], last[1], last[2]});
            }
        }
        return res;
     /*   int left = 0, count = 0;
        vector<int> freq(3, 0); // Frequency of 'a', 'b', 'c' assigning with zero.
        
        for (int right = 0; right < s.size(); ++right) {
            freq[s[right] - 'a']++; //it means the character is seen in the freq
            
            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                count += s.size() - right; // Every valid substring from [left, right] contributes
                freq[s[left] - 'a']--;
                left++; // Shrink window
            }
        }
        return count;*/
    }
};
