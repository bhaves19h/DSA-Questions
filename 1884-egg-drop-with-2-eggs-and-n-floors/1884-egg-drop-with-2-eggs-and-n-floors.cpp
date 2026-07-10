class Solution {
public:
    int solve(int k , vector<int>&dp){
         if(k ==0 )return k;
         if(dp[k]!= -1)return dp[k];
        int ans = INT_MAX;
        for(int i = 1 ; i<=k ; i++){
            int temp = 1+max(i-1, solve(k-i,dp));
            ans = min(ans ,temp);
        }
        return dp[k] =ans;
    };

    int twoEggDrop(int n) {
        vector<int>dp(n+1 ,-1);
        int res = solve(n,dp);
        return res;
    }
};