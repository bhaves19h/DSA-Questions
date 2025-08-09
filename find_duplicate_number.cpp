class Solution {
public:
    int findDuplicate(vector<int>& arr) {
       /* int n = nums.size();
        int sum = accumulate(nums.begin() , nums.end() , 0);
        int duplicate = sum - (n-1)*(n)/2;
        return duplicate;*/
        /*
        unordered_map<int,int>freq;
        for(int i : nums){
            freq[i]++;        
        }
        
        for(auto& pair : freq){
        if(pair.second == 2){
            return pair.first;  
           }
        }
    return -1;*/

    if(arr.size() == 2 && arr[0]- arr[1] == 0 ){
        return arr[0];
    }
    sort(arr.begin() , arr.end());
    for(int i = 1 ; i< arr.size() ; i++){
       if( arr[i]-arr[i-1] == 0) {
            return arr[i];
        }
    }
    return -1;
    }
};
