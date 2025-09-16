//TC 4*O(n)

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        // Mapping of digits to their corresponding characters
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result = {""}; // Start with an empty string as the initial combination
        
        // Iterate through each digit in the input string
        for (char digit : digits) {
            vector<string> temp;
            string letters = mapping[digit - '0']; // Get the characters for the current digit
            
            // Build new combinations by appending the current digit's letters
            for (const string& combination : result) {
                for (char letter : letters) {
                    temp.push_back(combination + letter);
                }
            }
            result = temp; // Update the result with the new combinations
        }
        
        return result;
    }
};
 
