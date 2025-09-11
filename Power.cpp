class Solution {
public:
    double myPow(double x, int n) {
        //your code goes here
        if(n<0 && n>-1000){
            x = 1/x;
            n = -(long long)n;
        }

        if(n == 0 ){
            return 1;
        }

        double half = myPow(x,n/2);
        
        if(n%2 == 0){
            return half*half;
        }else{
            return half*half*x;
        }
    }
};
