class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX; // store the minimum length of subarray
        int sum = 0 , j = 0;
        for (int i = 0; i < n; i++) {
                sum += nums[i]; // keep adding elements to sum

                while (sum >= target) {
                    
                    minLen = min(minLen, i - j + 1); // update min length  length of index j to i i increses to forward you go forward and j                   increase only when the condition met then both j nd i 
                    sum -= nums[j]; // once found, no need to expand this window , we are subtracting to ccheck can we still get the smaller sum                 length
                    j++; //jb tk koi subarray chotta na mile tb tk reset krte  jao or update kro
                }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};
