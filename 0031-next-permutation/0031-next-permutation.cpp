class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     //   next_permutation(nums.begin() , nums.end());

     int n =nums.size();
     int pivot = -1;
     //because we are finding next greater n= 5 next will be 6 
     for(int i =n-2 ; i>=0 ; i--){
        if(nums[i]<nums[i+1]){
            pivot =i;
            break;
        }
     }
     //if elements are already in deceding order revrse them 
     if(pivot ==-1){
        reverse(nums.begin() , nums.end());
        return;
     }
     //find a element from back which is greater than the pivot 
     for(int i =n-1 ; i>=0 ; i--){
        if(nums[i]>nums[pivot]){
                swap(nums[i] , nums[pivot]);
                break;
        }
     }
     //reverse the last digits from pivot to end like 3 6 5 4   pivot is 3 and swap it with last digit 4 / 
     //6 5 3 to 3 5 6 
      reverse(nums.begin() + pivot + 1, nums.end());
    }
};