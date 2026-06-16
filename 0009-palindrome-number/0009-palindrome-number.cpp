#include <limits.h> // For INT_MAX

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers that end with 0 (except 0 itself) cannot be palindromes.
        if (x < 0 /*|| (x % 10 == 0 && x != 0)*/) {
            return false;
        }

        int reversed = 0;
        int original = x;

        // Reverse the number with overflow check
        while (x > 0) {
            int lastDigit = x % 10;

            // Check for potential overflow
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && lastDigit > 7)) {
                return false; // Overflow would occur, return false as it's not a palindrome.
            }

            reversed = reversed * 10 + lastDigit;
            x /= 10;
        }

        // If the reversed number is equal to the original number, it is a palindrome.
        return reversed == original;
    }
};
