class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty())return 0;
        sort(intervals.begin(), intervals.end(),[](auto& a, auto& b) { return a[1] < b[1]; });

        int n = intervals.size();
        int end = intervals[0][1]; // end of first chosen interval
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= end) { // non-overlapping → keep it
                cnt++;
                end = intervals[i][1];
            }
        }
        return n - cnt;
    }
};
