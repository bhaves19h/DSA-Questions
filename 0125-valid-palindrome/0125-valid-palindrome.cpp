class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;

        // Loop to compare characters from both ends
        while (st < e) {
            // Skip non-alphanumeric characters
            while (st < e && !isalnum(s[st])) ++st;   //stop when there is any alphabets or numeric charcter 
            while (st < e && !isalnum(s[e])) --e;     //check from the last and stop if any alpha numeric charcter come

            // Compare characters
            if (tolower(s[st]) != tolower(s[e])) {
                return false; //to lower both the chracter and compare them if equal then its okyy
            }
            
            // Move pointers
            st++;
            e--;
        }

        // If all characters matched, it's a palindrome
        return true;
    }
};
