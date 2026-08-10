class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int cnt =1;
        int max_stk = 1;
        int n = nums.size();
        if(n==0 )return 0;
        for(int i =1 ; i<n ; i++){
            if (nums[i] == nums[i-1]) {
                continue; 
            }
            if(nums[i] ==nums[i-1]+1)cnt++;
            else{
                max_stk = max(max_stk, cnt);
                cnt =1;
            }
        }
        return max(max_stk,cnt);
    }
};