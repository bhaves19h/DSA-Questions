class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); 
        stack<int> s;

        for (int i = 2 * n - 1; i >= 0; i--) {     //2 * n - 1	=> Iterate the array twice to simulate circularity
            while (s.size() > 0 && nums[s.top()] <= nums[i % n]) {
                s.pop();
            }
            if(i<n){
            ans[i % n] = s.empty() ? -1 : nums[s.top()];
            }
            s.push(i % n);   //	Map virtual index to real index in nums
            
        }
        return ans;
    }
};
