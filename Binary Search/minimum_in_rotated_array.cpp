class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If middle element is greater than rightmost,
            // then the minimum is in the right half.
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            else {
                // Otherwise, the minimum is in the left half (including mid).
                high = mid;
            }
        }
        return low;
    }
};
