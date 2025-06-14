class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // Option 1: Three largest numbers
        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        // Option 2: Two smallest (could be negative) and the largest
        int option2 = nums[0] * nums[1] * nums[n - 1];
        return max(option1, option2);
    }
};
