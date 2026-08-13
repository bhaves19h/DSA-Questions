class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        /* int i = 0;  // Pointer for nums1
         int j = 0;  // Pointer for nums2
         int k = 0;  // Pointer for merged array (nums1)

     // Merge while both arrays have elements
         while (i < m && j < n) {
             if (nums1[i] <= nums2[j]) {
                 nums1[k++] = nums1[i++];
             } else {
                 nums1[k++] = nums2[j++];
             }
         }

     // If elements left in nums2, copy them
         while (j < n) {
             nums1[k++] = nums2[j++];
         }

     // No need to copy nums1's remaining elements since they are already in
     place*/

        int idx = m + n - 1, i = m - 1, j = n - 1;
        while (i >= 0 && j >= 0) {
            if (A[i] > B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        while (j >= 0) {
            A[idx--] = B[j--];
        }
    }
};