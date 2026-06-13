class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int floorVal = -1;  // -1 if not found
        int ceilVal = -1;

        for (int num : nums) {
            if (num <= x) {
                if (floorVal == -1 || num > floorVal) {
                    floorVal = num;   // closer/larger floor
                }
            }
            if (num >= x) {
                if (ceilVal == -1 || num < ceilVal) {
                    ceilVal = num;   // closer/smaller ceil
                }
            }
        }

        return {floorVal, ceilVal};
    }
};
