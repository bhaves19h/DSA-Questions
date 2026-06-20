class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2
        vector<bool> isPrime(n, true); // Assume all numbers are prime initially
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
        int primeCount = 0;
        
        for (long i = 2; i < n; i++) {
            if (isPrime[i]) {
                primeCount++; // Count this prime number
                // Mark multiples of `i` as non-prime
                for (long j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return primeCount;
    }
};
