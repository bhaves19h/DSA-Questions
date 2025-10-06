class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        for (int i = 0; i < nums1.size(); i++) {
            int element = nums1[i];
            int nextGreater = -1;
            bool found = false;
            
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == element) {
                    found = true;
                }
                if (found && nums2[j] > element) {
                    nextGreater = nums2[j];
                    break;
                }
            }
            
            res.push_back(nextGreater);
        }
        return res;
    }
};
