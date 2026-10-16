class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       long long odd = 0 ,even = 0;
       for(int &x:nums){
        even = max(even , odd+x);
        odd = even -x;
       }
       return even;
    }
};