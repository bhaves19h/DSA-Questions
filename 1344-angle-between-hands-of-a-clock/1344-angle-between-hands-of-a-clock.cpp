class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12;
        double res=  abs(30*hour - 5.5*minutes); 
        return min(res , 360-res);
    }
};