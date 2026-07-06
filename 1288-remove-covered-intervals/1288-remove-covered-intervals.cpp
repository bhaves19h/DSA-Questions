class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& inter) {
        int cnt = 0;
        int maxi = 0;
        sort(inter.begin() , inter.end() , [](vector<int>&a ,vector<int>&b){
            if(a[0] == b[0])return a[1]>b[1];//if interval are same then second part will arrange in desc order
            return a[0]<b[0];
        });
        for(auto& x : inter){
            if(x[1]>maxi){
                cnt++;
                maxi = x[1];
            }
        }
        return cnt;
    }
};