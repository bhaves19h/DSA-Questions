class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        string k = to_string(n);
        string res = "";
        long long sum = 0;
        int s = k.size();
        for(int i = 0 ; i<s ;i++){
            if(k[i]=='0')continue;
            else{
                sum += k[i]-'0';
                res += k[i];
            }
        }
        long long r = stoi(res);
        return r*sum;
    }
};