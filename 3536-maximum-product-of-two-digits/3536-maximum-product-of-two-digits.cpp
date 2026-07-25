class Solution {
public:
    int maxProduct(int n) {
        int ans  =INT_MIN;
        if(n<=1)return 1;
        vector<int>res;
        string s = to_string(n);
        for(char ch:s){
            res.push_back(ch-'0');
        }
        sort(res.begin(),res.end());
        int k = res.size();
        for(int i =1 ; i<k ; i++){
            ans = max(ans, res[i]*res[i-1]);
        }
        
        return ans;
    }
};