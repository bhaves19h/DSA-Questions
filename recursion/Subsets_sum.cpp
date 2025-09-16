class Solution {
  public:
  void func(int ind , int sum , vector<int>&arr , int N, vector<int>&Sumsubset){
  if(ind == N){
    Sumsubset.push_back(sum);
    return;
  }
  //pick element
  func(ind+1,sum+arr[ind],arr,N,Sumsubset);
  //do not pick
  func(ind+1 , sum ,arr,N,Sumsubset);
  }
    vector<int> subsetSums(vector<int>& nums) {
        vector<int>Sumsubset;
        int N = nums.size();
        func(0,0,nums,N,Sumsubset);
        sort(Sumsubset.begin(),Sumsubset.end());
        return Sumsubset;

    }
};
