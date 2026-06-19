class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0,curr = 0;
        for(auto&g : gain){
            curr += g;
            ans = max(ans , curr);
        }
        return ans;
    }
};