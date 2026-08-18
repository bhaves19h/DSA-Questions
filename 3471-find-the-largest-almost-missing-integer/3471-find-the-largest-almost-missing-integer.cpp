class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }

        if (k == 1) {
            int max_val = -1;
            for (const auto& p : mp) {
                if (p.second == 1) {
                    max_val = max(max_val, p.first);
                }
            }
            return max_val;
        }

        else if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        int ans = -1;
        if (mp[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }
        if (mp[nums[n - 1]] == 1) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};