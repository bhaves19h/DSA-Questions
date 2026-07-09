/*
class Solution {
public:
    int find(int k , int n ){
        if(n== 0 || n==1)return n;
        if(k==1)return n;
        int ans = 1000000;
        for(int i =1 ; i<=n; i++){
            int temp = 1+max(find(k-1 , i-1) , find(k,n-i));
            ans = min(ans,temp);
        }
        return ans;
    } 

    int superEggDrop(int k, int n) {
    //k = egg ; n = floor;
    return find(k,n);
    }
};


*/


/*
class Solution {
public:
    int find(int k , int n ,vector<vector<int>>&memo){
        if(n== 0 || n==1)return n;
        if(k==1)return n;
        if(memo[k][n] != -1)return memo[k][n];
        int ans = 1000000 ;
        for(int i =1 ; i<=n; i++){
            int temp = 1+max(find(k-1 , i-1,memo) , find(k,n-i,memo));
            ans = min(ans,temp);
        }
        return memo[k][n]=ans;
    } 

    int superEggDrop(int k, int n) {
    //k = egg ; n = floor;
    vector<vector<int>>memo(k+1 ,vector<int>(n+1 ,-1));
    return find(k,n,memo);
    }
};
*/

class Solution {
public:
    int find(int k , int n ,vector<vector<int>>&memo){
        if(n== 0 || n==1)return n;
        if(k==1)return n;
        if(memo[k][n] != -1)return memo[k][n];
        int ans = 1000000 ,l=1 , h= n , temp = 0;
        while(l<=h){
            int mid = (l+h)/2;
            int left = find(k-1 , mid-1 , memo);
            int right = find(k , n-mid , memo);
            temp = 1+max(left ,right);
            if(left < right){
                l = mid+1;
            }
            else{
                h= mid-1;
            }
            ans = min(ans ,temp);
        }
        return memo[k][n]=ans;
    } 

    int superEggDrop(int k, int n) {
    //k = egg ; n = floor;
    vector<vector<int>>memo(k+1 ,vector<int>(n+1 ,-1));
    return find(k,n,memo);
    }
};
