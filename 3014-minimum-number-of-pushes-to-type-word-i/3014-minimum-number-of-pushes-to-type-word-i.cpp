class Solution {
public:
    int minimumPushes(string word) {
        int cnt =0 , n = word.size();
        for(int i =0 ; i<n ; i++){
            cnt += i/8+1;
        }
        return cnt;
    }
};