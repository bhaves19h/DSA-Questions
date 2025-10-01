class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (int bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            } else { // bill == 20
                if (ten > 0 && five > 0) { // prefer 10+5
                    ten--;
                    five--;
                } else if (five >= 3) { // else 5+5+5
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
