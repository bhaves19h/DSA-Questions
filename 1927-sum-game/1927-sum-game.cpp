class Solution {
public:
    bool sumGame(string num) {

        int leftSum = 0;
        int leftCount = 0;
        int rightSum = 0;
        int rightCount = 0;
        int n = num.size();

        for (int i = 0; i < n / 2; i++) {

            if (num[i] == '?') {
                leftCount++;
            } else {
                leftSum += (num[i] - '0');
            }
        }

        for (int i = n / 2; i < n; i++) {

            if (num[i] == '?') {
                rightCount++;
            } else {
                rightSum += (num[i] - '0');
            }
        }

        if((leftCount + rightCount)%2)
          return true;

        int diff = leftSum - rightSum;

        if(diff<0){
            diff = -diff;
            swap(leftCount,rightCount);
        }

        if(diff == 0){
            return (leftCount != rightCount);
        }else{
            if(leftCount >= rightCount ){
                return true;
            }else {
                 int bobChance = abs(leftCount - rightCount)/2;
                 return (diff != 9*bobChance);
            }
        }
      
    }
};