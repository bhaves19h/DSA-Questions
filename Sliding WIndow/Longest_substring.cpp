
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> hash(256, -1); // store last index of characters if koi character repeat krta h tho uski jgh update ho jati h new wale se
    int left = 0, right = 0;
    int n = s.size();
    int len = 0;

    while (right < n) {
        // if character already seen, move left pointer
        if (hash[s[right]] != -1) {
            left = max(hash[s[right]] + 1, left);
        }

        // update hash with current index
        hash[s[right]] = right;

        // update maximum length
        len = max(len, right - left + 1);
        right++;
    }
    return len;    
        /*
     // Helper function to check if the substring is a palindrome
     int n = s.size();
        int maxLen = 0;
        int start = 0; // The start of the current substring
        
        // Check all substrings with the sliding window
        for (int end = 0; end < n; end++) {
            for (int i = start; i < end; i++) {
                // If there's a duplicate, move the start pointer
                if (s[i] == s[end]) {
                    start = i + 1;  // Skip the duplicate character
                    break;
                }
            }
            
            // Update the maximum length of substring without repeating characters
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;*/
    }
};
