class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int one  = 0;
        int maxi = INT_MAX;
        for(char c:s){
            if(c== '1')one++;
        }
        s= "1" + s +"1";
        int n = s.size();
        int i = 0 ;
        int ans = one;
        //skips 1's
        while(i<n && s[i] == '1')i++;

        //read first 0 block
        int c0 = 0 ;
        while(i<n && s[i] == '0'){
            c0++;
            i++;
        }

        while(i<n){
            //read middle block
            int c1 = 0;
            while(i<n && s[i] == '1'){
                c1++;
                i++;
            }
            //if no middle break
            if(c1 == 0)break;
            //count right zeros
            int c2=0;
            while(i<n && s[i] == '0'){
                c2++;
                i++;
            }
            if(c2== 0 )break;

            ans = max(ans,one+c0+c2);
            c0  = c2;
        }
       return ans;
    }
};