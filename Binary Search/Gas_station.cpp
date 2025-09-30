#include <bits/stdc++.h>
using namespace std;

// #Function: check karo ki given maxDist ke saath problem solve ho sakti hai ya nahi
bool isPossible(vector<int>& stations, int k, double maxDist) {
    int n = stations.size();
    int requiredStations = 0;

    for (int i = 1; i < n; i++) {
        double dist = stations[i] - stations[i - 1];

        // #kitne extra stations chahiye between two stations
        requiredStations += (int)(dist / maxDist);

        if (requiredStations > k) return false; // #agar zyada stations chahiye to fail
    }
    return true;
}

// #Main function: binary search on answer
double minimizeMaxDistance(vector<int>& stations, int k) {
    int n = stations.size();

    double low = 0;  
    double high = stations[n - 1] - stations[0]; // #max possible gap
    double ans = high;

    while (high - low > 1e-6) { // #precision tak search karna hai
        double mid = (low + high) / 2.0;

        if (isPossible(stations, k, mid)) {
            ans = mid;   // #mid feasible hai → try smaller
            high = mid;
        } else {
            low = mid;   // #mid feasible nahi → bada gap lena padega
        }
    }
    return ans;
}

int main() {
    vector<int> stations = {1, 13, 17, 23}; // #already placed gas stations
    int k = 5; // #new gas stations allowed

    cout << fixed << setprecision(6) << minimizeMaxDistance(stations, k) << endl;
    return 0;
}
