class Solution {
public:
    string processStr(string s) {
        string res = "";

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (islower(ch)) {
                res += ch; // keep lowercase letters
            }
            else if (ch == '*') {
                // Remove last character if exists
                if (!res.empty()) {
                    res.pop_back();
                }
            }
            else if (ch == '#') {
                // Double the last character if exists
                if (!res.empty()) {
                    res += res;
                }
            }
            else {
                // Reverse the whole result string
                reverse(res.begin(), res.end());
            }
        }

        return res;
    }
};
