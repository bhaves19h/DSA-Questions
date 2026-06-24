class Solution {
public:
    int countDigitOne(int n) {
        if (n <= 0) return 0;
        if (n < 10) return 1;

        long power = 1;
        while (power * 10 <= n)
            power *= 10;

        int first = n / power;
        int rest = n % power;

        long onesInPowerMinus1 =
            countDigitOne(power - 1);

        if (first == 1) {
            return onesInPowerMinus1
                 + (rest + 1)
                 + countDigitOne(rest);
        } else {
            return first * onesInPowerMinus1
                 + power
                 + countDigitOne(rest);
        }
    }
};