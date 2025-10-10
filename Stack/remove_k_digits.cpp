class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        // Step 1: Iterate over digits
        for (int i = 0; i < num.size(); i++) {
            // remove larger digits when possible
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        // Step 2: If still k left, remove from end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Step 3: Build the result from stack
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        // Step 4: Remove leading zeros
        int start = 0;
        while (start < result.size() && result[start] == '0')
            start++;

        result = result.substr(start);

        // Step 5: If empty, return "0"
        return result.empty() ? "0" : result;
    }
};
