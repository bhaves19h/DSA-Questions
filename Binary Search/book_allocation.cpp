#include <bits/stdc++.h>
using namespace std;

// #Count students required if max pages per student = pages
int countStudents(vector<int> &arr, int pages) {
    int students = 1;          // #initially 1 student
    long long pagesStudent = 0; // #current pages allocated to student

    for (int i = 0; i < arr.size(); i++) {
        // #If current book can be given to same student
        if (pagesStudent + arr[i] <= pages) {
            pagesStudent += arr[i];
        } 
        // #Otherwise allocate to next student
        else {
            students += 1;
            pagesStudent = arr[i];
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
