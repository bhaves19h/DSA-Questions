// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
O(N x L)
int main() {
    string s = "ABAABC";
    int k = 3;
    vector<int>freq(26,0);
    int left = 0 , maxfreq = 0,ans =0 ;
    for(int right = 0 ; right<s.size() ; right++){
        freq[s[right]-'A']++;
        
        int windowsize = right -left+1;
        maxfreq = max(maxfreq , freq[s[right-'A']]);
        
        while(windowsize - maxfreq>k){
            left++;
        }
        ans = max(ans , right-left+1);
    }
    cout<<ans;
    return 0;
}
