#include <limits.h> // For INT_MAX

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers that end with 0 (except 0 itself) cannot be palindromes.
        if (x < 0 /*|| (x % 10 == 0 && x != 0)*/) {
            return false;
        }

        long reversed = 0;
        long original = x;

        // Reverse the number with overflow check
        while (x > 0) {
            long lastDigit = x % 10;

            // Check for potential overflow
            if (reversed == INT_MAX / 10 && lastDigit > 7) {
                return false; 
            }
            reversed = reversed * 10 + lastDigit;
            x /= 10;
        }
        return reversed == original;
    }
};
