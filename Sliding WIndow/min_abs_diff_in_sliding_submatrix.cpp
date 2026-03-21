//You are given an m x n integer matrix grid and an integer k.

//For every contiguous k x k submatrix of grid, compute the minimum absolute difference between any two distinct values within that submatrix.

//Return a 2D array ans of size (m - k + 1) x (n - k + 1), where ans[i][j] is the minimum absolute difference in the submatrix whose top-left corner is (i, j) in grid.

//Note: If all elements in the submatrix have the same value, the answer will be 0.

//A submatrix (x1, y1, x2, y2) is a matrix that is formed by choosing all cells matrix[x][y] where x1 <= x <= x2 and y1 <= y <= y2.

//LEEtcode problem
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        //we only need the required subarray size which was given
        vector<vector<int>> finl(m - k + 1, vector<int>(n - k + 1, 0));
        //we will transe only particular till column size less than (m-k) 
        for (int i = 0; i <= m - k; i++) {
            for (int j = 0; j <= n - k; j++) {
                vector<int> temp;
                // create temp vector to store element required k size row elements 
                // collect k x k elements
                for (int x = i; x < i + k; x++) {
                    for (int y = j; y < j + k; y++) {
                        temp.push_back(grid[x][y]);
                    }
                }
                
                sort(temp.begin(), temp.end());
                
                int ans = INT_MAX;
                //traverse through the temp array to get min abs diffrence to get final result ,to remove duplicate if curr and prev same then remove it and also check the int max case
                for (int i = 1; i < temp.size(); i++) {
                    if (temp[i] == temp[i - 1]) continue;
                    ans = min(ans, temp[i] - temp[i - 1]);
                }
                finl[i][j] = (ans == INT_MAX ? 0 : ans);
            }
        }
        return finl;
    }
};
