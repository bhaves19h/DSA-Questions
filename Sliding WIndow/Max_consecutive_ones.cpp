class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        /*  int n = nums.size();
          int ans = 0;
          for (int i = 0; i < n; i++) {
              int zeroCount = 0;
              for (int j = i; j < n; j++) {
                  if (nums[j] == 0)
                      zeroCount++;
                  if (zeroCount <= k)
                      ans = max(ans, j - i + 1);
                  else
                      break;
              }
          }
          return ans;*/
        int n = nums.size();
        int left = 0, right = 0;
        int zeroCount = 0, ans = 0;

        while (right < n) {
            if (nums[right] == 0)
                zeroCount++;

            while (zeroCount > k) {
                if (nums[left] == 0)
                    zeroCount--;
                left++;
            }

            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};
