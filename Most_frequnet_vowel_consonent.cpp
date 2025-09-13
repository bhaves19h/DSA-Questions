class Solution {
public:
    int maxFreqSum(string s) {
       unordered_map<char,int>freq;
       int sum = 0;

       for(char c :s){
        if(isalpha(c)){
            freq[c]++;
        }
       }

        int maxVowel = 0, maxCons = 0;

        for (auto &p : freq) {
            char ch = p.first;
            int f = p.second;
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                maxVowel = max(maxVowel, f);
            else
                maxCons = max(maxCons, f);
        }

        return maxVowel + maxCons;
    }
};
