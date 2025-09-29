class Solution {
public:
    // Helper function: hours required to eat all piles at speed = mid
    long long getHours(vector<int>& piles, int mid) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + mid - 1) / mid;  // ceil(pile / mid)
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (getHours(piles, mid) <= h) {
                ans = mid;        // possible, try smaller speed
                high = mid - 1;
            } else {
                low = mid + 1;    // too slow, need more speed
            }
        }
        return ans;
    }
};
