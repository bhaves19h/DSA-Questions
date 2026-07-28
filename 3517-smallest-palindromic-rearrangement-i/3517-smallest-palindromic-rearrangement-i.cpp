class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int mid = n / 2;
        
        // 1. Sort ONLY the first half (ignores middle character if odd)
        sort(s.begin(), s.begin() + mid);

        // 2. Mirror the sorted first half directly to the second half
        for (int i = 0; i < mid; i++) {
            s[n - 1 - i] = s[i];
        }

        return s;
    }
};




      /*
        int n = s.size();
        int mid = n / 2;

        sort(s.begin(), s.begin() + mid);

        string ans;

        for (int i = 0; i < mid; i++) {
            ans += s[i];
        }

        if (n % 2 == 1) {
            ans += s[mid];
        }

        for (int i = mid - 1; i >= 0; i--) {
            ans += s[i];
        }

        return ans;

    }
};*/