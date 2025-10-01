class Solution {
public:
    bool checkValidString(string s) {

        int minOpen = 0, maxOpen = 0;
        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            } else if (c == ')') {
                minOpen--;
                maxOpen--;
            } else { // '*'
                minOpen--;     // if '*' is ')'a
                maxOpen++;     // if '*' is '('
            }
            
            if (maxOpen < 0) return false;   // more ')' than '('
            if (minOpen < 0) minOpen = 0;    // min cannot go negative
        }
        return minOpen == 0;

    }
};
