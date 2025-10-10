#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  // ios::sync_with_stdio(false);
  //  cin.tie(nullptr);
    int n;
    if (!(cin >> n)) 
    return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) 
    cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; i += 2) {
        ans = max(ans, llabs(a[i+1] - a[i]));
    }
    cout << ans << '\n';
    return 0;
}
