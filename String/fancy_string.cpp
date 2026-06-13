class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        int n = s.size();

        for(int i = 0; i < n; i++) {
            // Check bounds before accessing s[i+2]
            //we will not add the 3rd element, beacause it was already checked by last and second last element are same so no need to add this
            if(i >= 2 && s[i] == res.back() && s[i] == res[res.size() - 2]) {
                continue;  // Skip third character
            }
            res.push_back(s[i]);
        }
        return res;
    }
};
