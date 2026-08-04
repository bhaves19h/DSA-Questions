class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int curr = nums[0];
        for(int i = 0 ; i<n ; i++ ,curr++){
            if(curr<nums[i]){
                arr.push_back(curr);
                i--;
            }
        }
        return arr;
    }
};