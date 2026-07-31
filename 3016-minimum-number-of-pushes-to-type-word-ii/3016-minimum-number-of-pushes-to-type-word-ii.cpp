class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int cnt =0;
        vector<int>chr(26,0);
        for(char ch:word){
            chr[ch-'a']++;
        }
        sort(chr.begin() , chr.end());
        int k =0;

        for(int i =0 ; i<=25 ; i++){
           int freqIdx = 25 - i;
        if (i % 8 == 0) k++;
           cnt += chr[freqIdx] * k;
        }
        return cnt;
    }
};