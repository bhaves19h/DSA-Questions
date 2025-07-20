class Solution {
public:
    int arrangeCoins(int n) {
        int rows = 0;
        int required = 1;  // coins needed for the current row

        while (n >= required) {
            n -= required;
            rows++;
            required++;
        }

        return rows;
    }
};
