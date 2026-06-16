#include <limits.h> // For INT_MAX

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 ) {
            return false;
        }
        long reversed = 0;
        long original = x;
        while (x > 0) {
            long lastDigit = x % 10;
            if ( lastDigit > 9) {
                return false; 
            }
            reversed = reversed * 10 + lastDigit;
            x /= 10;
        }
        return reversed == original;
    }
};
