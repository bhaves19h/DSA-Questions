class Solution {
public:
    int trap(vector<int>& arr) {
     /*-   int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;
        int water_trapped = 0;

        while (left <= right) {
            if (height[left] <= height[right]) {
                // If the current height at left is less than or equal to right
                if (height[left] >= left_max) {
                    left_max = height[left];  // Update left_max
                } else {
                    water_trapped += left_max - height[left];  // Calculate water trapped
                }
                left++;  // Move left pointer to the right
            } else {
                // If the current height at right is less than left
                if (height[right] >= right_max) {
                    right_max = height[right];  // Update right_max
                } else {
                    water_trapped += right_max - height[right];  // Calculate water trapped
                }
                right--;  // Move right pointer to the left
            }
        }
        
        return water_trapped;*/

    int n = arr.size();
    int l = 0, r = n - 1;
    int lMax = 0, rMax = 0;
    int total = 0;

    while (l <= r) {
        if (arr[l] <= arr[r]) {
            if (lMax > arr[l])
                total += lMax - arr[l];
            else
                lMax = arr[l];
            l++;
        } else {
            if (rMax > arr[r]) //rMax = max(rMax , arr[r])
                total += rMax - arr[r];
            else
                rMax = arr[r];//no need if rMax written
            r--;
        }
    }
    return total;
    }
};
