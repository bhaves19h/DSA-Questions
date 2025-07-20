class Solution {
public:
    bool checkPerfectNumber(int num) {
        int x = 0;
        for(int n = 1 ; n < num ;n++){
            if( num % n == 0){
                x += n;
            }
        }
        
        return num == x;
    }
};
