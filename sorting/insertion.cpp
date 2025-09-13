class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1 ; i < n ; i++){
        int curr  = nums[i];
        int prev = i-1;
    while(prev>= 0 && nums[prev]>curr ){
         nums[prev+1] = nums[prev];
         prev--;
    }
    nums[prev+1] = curr;
    }
    return nums;
    }
};
