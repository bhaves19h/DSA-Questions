class Solution {
public:
    string frequencySort(string s) {

        vector<char> nums;
        unordered_map<char, int> freq;
        for (auto& ch : s) {
            freq[ch]++;
        }
        for (int i = 0 ; i < s.size() ; i++) {
            nums.push_back(s[i]);
        }
        sort(nums.begin(), nums.end(), [&](char a, char b) {
            if (freq[a] == freq[b])
                return a < b;
            return freq[a] > freq[b]; // higher frequency first
        });
       string res = "";
        for(auto &i :nums){
        res += i;
        }
        return res;
    }
};
