class Solution {
public:
    int partition(vector<int>& arr, int st, int end) {
        int idx = st - 1, pivot = arr[end];
        for (int j = st; j < end; j++) {
            if (arr[j] <= pivot) {
                idx++;
                swap(arr[j], arr[idx]);
            }
        }
        idx++;
        swap(arr[end], arr[idx]);
        return idx;
    }

    void quicksort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int pivtidx = partition(arr, st, end);
            quicksort(arr, st, pivtidx - 1);
            quicksort(arr, pivtidx + 1, end);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};
