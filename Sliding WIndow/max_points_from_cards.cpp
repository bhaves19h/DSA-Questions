class Solution {
public:
   int maxScore(vector<int>& nums, int k) {
    int lsum = 0, rsum = 0, maxSum = 0;
    int n = nums.size();

    // 1. Pehle left ke k cards ka sum
    for (int i = 0; i < k; i++) {
        lsum += nums[i];
    }
    maxSum = lsum;

    // 2. Ab dheere dheere right se add karte jao aur left se hatao
    int rIndex = n - 1;
    for (int i = k - 1; i >= 0; i--) {
        lsum -= nums[i];           // left me se ek hataya
        rsum += nums[rIndex];      // right se ek add kiya
        rIndex--;

        maxSum = max(maxSum, lsum + rsum);
    }

    return maxSum;
}
};
