class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n = nums.size();
        //max total bits 2^k-1 
        //max XOR unique values 
        // k = bit length of n 
        //"if every number from 1 to n uses at most k bits, then their cumulative XOR also uses at most k bits."
        if(n<=2)return n;
        else{
            return 1 << bit_width(n);
        }
    }
};