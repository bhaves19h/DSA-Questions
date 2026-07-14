#include <bits/stdc++.h>
using namespace std;
int solve(int i, int K, vector<int>& price, vector<int>& vol,
          vector<vector<int>>& dp) {
    if (i == price.size())
        return 0;
    if (dp[i][K] != -1)
        return dp[i][K];
    int notTake = solve(i + 1, K, price, vol, dp);
    int take = 0;
    if (price[i] <= K) {
        take = vol[i] + solve(i, K - price[i], price, vol, dp);
    }
    return dp[i][K] = max(take, notTake);
}
int main() {
    int n = 5, K = 100;
    vector<int> price = {10, 20, 30, 40, 50};
    vector<int> vol = {1, 2, 3, 4, 5};
    vector<vector<int>> dp(n, vector<int>(K + 1, -1));
    cout << solve(0, K, price, vol, dp);
    return 0;
}
