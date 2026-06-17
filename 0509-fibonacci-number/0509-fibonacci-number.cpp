class Solution {
public:
int fibo(int n , vector<int>&dp){
        if(n<=1)return n;
        if(dp[n] != -1)return dp[n];
        return dp[n] = fib(n-1)+fib(n-2);
}
    int fib(int n) {
         vector<int>dp(n+1 , -1);
        return fibo(n,dp);
         
      /*  if (n == 0) return 0;
        else if (n == 1) return 1;
        else {
            int num1 = 0, num2 = 1;
            int num3;
            for (int i = 2; i <= n; i++) {
                num3 = num1 + num2;
                num1 = num2;
                num2 = num3;
            }
            return num3;
        }*/
    }
};