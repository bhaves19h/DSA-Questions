class Solution {
public:
    bool checkDivisibility(int n) {
          if (n == 0) return false; 

        int pro =1;
        int sum =0;
        int k =  n;
        while(k>0){
           int d = k %10;
            pro *= d;
            sum += d;
            k /= 10;
        }
        return n%(pro + sum) == 0;
    }
};