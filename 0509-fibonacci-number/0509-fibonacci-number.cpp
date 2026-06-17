class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        return fib(n-1)+fib(n-2);
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