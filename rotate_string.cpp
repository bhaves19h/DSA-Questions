class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
       for (int r = 0; r < n; r++) {   // perform n rotations
        char first = s[0];          // store first character

        // shift all characters left
        for (int i = 0; i < n - 1; i++) {
            s[i] = s[i + 1];
        }

        s[n - 1] = first;           // put first character at the end
        if(s == goal) return true;

    }
    return false;
    }
};
