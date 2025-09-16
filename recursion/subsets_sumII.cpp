//TC 2^n*n
//SC O(2^n) x O*k

class Solution {
public:
void backtrack(vector<vector<int>>& result, vector<int>& current, vector<int>& nums, int start) {
    result.push_back(current); // Add the current subset to the result
    for (int i = start; i < nums.size(); i++) {
        // Skip duplicates
        if (i > start && nums[i] == nums[i - 1]) continue;
        current.push_back(nums[i]);           // Include nums[i] in the current subset
        backtrack(result, current, nums, i + 1); // Recursive call to the next element
        current.pop_back();                   // Backtrack: remove nums[i]
    }  
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   
    vector<vector<int>> result; // Stores all unique subsets
    vector<int> current;       // Temporary list to build subsets
    sort(nums.begin(), nums.end()); // Sort to handle duplicates
    backtrack(result, current, nums, 0);
    return result;
}
};
