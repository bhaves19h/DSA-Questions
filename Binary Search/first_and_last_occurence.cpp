class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool findFirst) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                if (findFirst)
                    high = mid - 1;  // keep searching left
                else
                    low = mid + 1;   // keep searching right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        int last  = binarySearch(nums, target, false);
        return {first, last};
    }
};
