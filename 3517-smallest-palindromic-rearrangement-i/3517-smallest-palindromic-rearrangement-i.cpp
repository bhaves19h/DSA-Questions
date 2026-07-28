class Solution {
public:
    string smallestPalindrome(string s) {
    /*    int n = s.size();
        int mid = (n/2);
        sort(s.begin(),s.end()-mid-1);
        reverse(s.begin()+mid+1 ,s.end());
        return s;

      */
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
};