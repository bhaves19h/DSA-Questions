class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> dummy = arr;
        sort(dummy.begin(), dummy.end());
        int n = arr.size();
        unordered_map<int, int> mp;
        int x=0 ;

        for (int num : dummy) {
            if (!mp.count(num))
                mp[num] = ++x;
        }

        for (auto& p : arr) {
            p = mp[p];
        }
        return arr;
    }
};