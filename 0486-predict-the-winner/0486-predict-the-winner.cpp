class Solution {
public:
    int getPlay1(int p1 , int i , int j , vector<int>&nums, bool turn){
        if(i>j)return p1;

        if(turn){
            int left = getPlay1(p1+ nums[i] , i+1 , j,nums , false);
            int right = getPlay1(p1+ nums[j] , i, j-1,nums , false);
            return max(left,right);
        }
        else{
            int left = getPlay1(p1, i+1 , j,nums , true);
            int right = getPlay1(p1 , i , j-1,nums , true);
            return min(left,right);
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        int sum =0;
        for(int num:nums)
        sum += num;
        int n = nums.size()-1;
        int playOne = getPlay1(0,0,n,nums,true);

        if(sum%2)
            return playOne >= (sum+1)/2;
        return playOne >= sum/2;
    }
};