//select kro sbse smallest ko or swap kro with the unsorted part and sort the smallest one
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i =0 ; i<n ; i++){
        int SI = i;
        for(int j = i+1 ; j< n ; j++){
            if(nums[j]  < nums[SI]){
                SI=j;
            }
        }
        swap(nums[i],nums[SI]);
    }
    return nums;
    }
};
