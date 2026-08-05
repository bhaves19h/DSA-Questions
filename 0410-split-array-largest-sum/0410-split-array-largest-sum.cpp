class Solution {
public:
// #Count students required if max pages per student = pages
/*
int countStudents(vector<int> &arr, int pages) {
    int students = 1;          // #initially 1 student
    long long pagesStudent = 0; // #current pages allocated to student

    for (int i = 0; i < arr.size(); i++) {
        // #If current book can be given to same student
        if (pagesStudent + arr[i] > pages) {
            students += 1;
            pagesStudent = arr[i];
            
        } 
        // #Otherwise allocate to next student
        else {
            pagesStudent += arr[i];
        }
    }
    return students; // #return total students required
}

// #Main function to find minimum max pages allocation
int findPages(vector<int> &arr, int n, int m) {
    if (m > n) return -1;  // #More students than books = not possible

    // #Search space = [max(pages in one book), sum of all pages]
    int low = *max_element(arr.begin(), arr.end()); // #lower bound
    int high = accumulate(arr.begin(), arr.end(), 0); // #upper bound

    // #Binary search on answer
    while (low <= high) {
        int mid = (low + high) / 2; // #try with mid pages
        int students = countStudents(arr, mid);

        if (students > m) {
            low = mid + 1;   // #need more capacity
        } else {
            high = mid - 1;  // #try smaller capacity
        }
    }
    return low; // #minimum possible pages
}
*/
int countSubarrays(vector<int> &nums, int maxSum) {
    int subarrays = 1, currentSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (currentSum + nums[i] > maxSum) {
            subarrays++;
            currentSum = nums[i];
        } else {
            currentSum += nums[i];
        }
    }
    return subarrays;
}
int splitArray(vector<int>& nums, int k) {

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while (low <= high) {
        int mid = (low + high) / 2;

        int requiredSubarrays = countSubarrays(nums, mid);

        if (requiredSubarrays <= k) {
            high = mid - 1;   // checking mid-1   ,to explore more minimum subarray sum
        } else {
            low = mid + 1;
        }
    }

    return low;
  }
};