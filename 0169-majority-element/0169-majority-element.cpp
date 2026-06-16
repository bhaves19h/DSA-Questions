class Solution {
public:
    int majorityElement(vector<int>& nums) {
      //  int n = nums.size();
        sort(nums.begin() , nums.end());
        return (nums[nums.size()/2]);
    }
};
  // MOORE'S VOTING ALGORITHM
 /*int ans = 0;
        for (int i = 0; i < nums.size();++i) { // count += num == ans ? 1 : -1; ->IF NUMS OF I IS EQUAL TO
                    // THE ANSWER RETURN CNT +1 ELSE -1
            if (count == 0) {
                ans = nums[i]; // MAJORITY ELEMENT HE
                count = 1;     // KITNE BAR MAJORITY ELEMENTS APPEAR HO RHA H
            } else if (nums[i] == ans)
                count++;
            else {
                count--;
            }
        }
        return ans;*/