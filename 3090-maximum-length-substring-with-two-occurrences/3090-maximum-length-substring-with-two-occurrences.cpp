class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int res =0 ,i=0; 
        vector<int>count(26,0);

         for(int j = 0 ; j<n ; j++){
            count[s[j]-'a']++;

            while(count[s[j]-'a']> 2){
                count[s[i]-'a']--;
                i++;
            }
            res = max(res, j-i+1);
         }  
         return res;  
          
             
    }
};