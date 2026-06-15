
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
        int m = nums2.size();
        vector<int> res;
        if(nums1[0]==nums2[0] ){
            res.push_back(nums1[0]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    if (find(res.begin(), res.end(), nums1[i]) == res.end()) {
                    res.push_back(nums1[i]);
                } 
                }
            }
        }

        return res;
 /*   unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int num : nums2) {
        if (set1.count(num)) {
            result.insert(num);
        }
    }

    return vector<int>(result.begin(), result.end());
*/
    }
};