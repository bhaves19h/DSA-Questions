class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size();
//time complexity  == O(n^2)
        
    for(int i = 0 ; i<n-1 ; i++ ){
        for(int j =  0 ; j< n-i-1 ; j++){
            if(nums[j]>nums[j+1]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = arr[j];
              int flg =1;
            }

        }
        if(flg ==1){
            break;
        }
    }
    return nums;
    }
};
