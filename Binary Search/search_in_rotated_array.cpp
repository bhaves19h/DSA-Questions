class Solution {
public:
    int search(vector<int>& arr, int key) {
              int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if the mid element is the key
            if (arr[mid] == key) {
                return mid;
            }

            // Check if the left half is sorted
            if (arr[low] <= arr[mid]) {
                // Check if the key lies within the sorted left half
                if (arr[low] <= key && key < arr[mid]) {
                    high = mid - 1; // Narrow the search to the left half
                } else {
                    low = mid + 1; // Search in the right half
                }
            } else { // Right half is sorted
                // Check if the key lies within the sorted right half
                if (arr[mid] < key && key <= arr[high]) {
                    low = mid + 1; // Narrow the search to the right half
                } else {
                    high = mid - 1; // Search in the left half
                }
            }
        }

        return -1;
    }
};
