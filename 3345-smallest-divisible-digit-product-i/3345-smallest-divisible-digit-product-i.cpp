class Solution {
public:
    int smallestNumber(int n, int t) {
    for(int i = n ; i<n+10 ; i++){
        int ans  = 1, k=i;
        while(k>0){
            int digit = k%10;
            ans *= digit;
            k /= 10;
            if((ans % t) == 0)return i;
        }   
        }
        return -1;
    }
};