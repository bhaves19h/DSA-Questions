class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = ""; int prevI=0;
        for(int i = 0 ; i<words.size() ; i++){
            int sum = 0;
            for(int j = 0 ; j<words[i].size() ; j++){
                sum += weights[words[i][j]-'a'];
                //words[i][j] ,i= 0 j=0 'a'-'a' = 0 weights[0] = 5, i=0;j=1 'b'-'a' = 1 , weights[1] = 3 ; sum = 5+3 = 8
            }
            int ch = sum%26;
            char sl = 'z'-ch;
            res += sl;
        }
        return res;
        /*
            char sl;int ch ,k=prevI ;
            int n = words[i].size();
           while(k<n+prevI ){
               sum += weights[k];
               k++;
           }
            prevI = k-1;
            ch = sum%26;
            sl = 'z'-ch;

            res += sl;
        } 
        return res;
    */
    }
};