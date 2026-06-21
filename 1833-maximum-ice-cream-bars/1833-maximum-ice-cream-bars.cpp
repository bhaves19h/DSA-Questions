class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int cnt = 0;
        int n = costs.size();
        if (costs[0] > coins)
            return 0;
       
            for (int cost : costs) {
                if (cost <= coins) {
                    coins -= cost;
                    cnt++;
                } else {
                    break;
                }
            }
        
        return cnt;
    }
};