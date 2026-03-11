class Solution {
public:
    int bitwiseComplement(int n) {
       if(n == 0) return 1;

    int ans ;
    int temp = n;

    int mask = (1 << (int)(log2(n) + 1)) - 1;
    return mask ^ n;
   /* while(temp > 0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }*/ 
    return ans;
    //return mask ^ n;

    }
};
