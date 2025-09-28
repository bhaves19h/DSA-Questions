class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // If the target is found, return true
            if (nums[mid] == target) {
                return true;
            }
            
            // If we cannot determine which side is sorted (due to duplicates) shrink it
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // If the left half is sorted
            else if (nums[left] <= nums[mid]) {
                // Check if the target lies in the left half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // If the right half is sorted
            else {
                // Check if the target lies in the right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        
        return false; // Target is not found
    }
};
