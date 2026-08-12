class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        int n = nums.size();
        int cnt = 0;
        int left = 0;
        int range = 0;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
            while (mp[nums[i]] > k) {
                mp[nums[left]]--;
                left++;
            }
            range = max(range,i-left+1);
        }
        return range;
    }
};