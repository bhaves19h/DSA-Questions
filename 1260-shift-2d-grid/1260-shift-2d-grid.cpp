class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
    //    k %= total;  // Optimize the number of shifts

        vector<vector<int>> result(m, vector<int>(n));

        for (int i = 0; i < total; ++i) {
            
            int newIndex = (i+ k) % total;
            
            int newRow = newIndex / n;
            int newCol = newIndex % n;

            int oldRow = i / n;
            int oldCol = i % n;

            result[newRow][newCol] = grid[oldRow][oldCol];
        }

        return result;
    }
};
