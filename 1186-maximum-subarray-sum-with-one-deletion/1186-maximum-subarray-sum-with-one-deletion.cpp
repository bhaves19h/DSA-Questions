class Solution {
public:
    int maximumSum(vector<int>& nums) {
         int keep = nums[0];
        int delte = -1000000;
        int ans = nums[0];
        int prevdelete;
        for(int i=1; i<nums.size() ; i++){
            int prevkeep = keep;
            int prevdeleted = delte;
            delte= max(prevkeep, prevdeleted+nums[i]);
            keep = max(nums[i] , prevkeep+ nums[i]);
            ans = max({ans , keep ,delte});
        }
        return ans;
    }
};