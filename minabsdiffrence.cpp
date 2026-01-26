class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minii = INT_MAX;
        int n = arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i =1 ; i<n ; i++){
           minii = min(minii,abs(arr[i-1] - arr[i]));
        }
        for(int i = 1 ; i<n ;i++){
            if(arr[i]-arr[i-1]==minii){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        
    return ans;
    }
};
