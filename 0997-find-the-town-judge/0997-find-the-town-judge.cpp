class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int m = trust.size();
        
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            int cele = trust[j][1];
             bool trustsSomeone = false;

            for (int i = 0; i < m; i++) {
                if (trust[i][1] == cele) {
                    cnt++;
                }
                if (trust[i][0] == cele)
                    trustsSomeone = true;
            }
            if (cnt == n-1 && !trustsSomeone)
            return cele;
        }
        
        return (n==1) ?1 :-1;
    }
};