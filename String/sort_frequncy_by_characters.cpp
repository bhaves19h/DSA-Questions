class Solution{	
	public:
		vector<char> frequencySort(string& s){
			vector<char>nums;
            unordered_map<char,int>freq;
            for(auto &ch: s){
                freq[ch]++;
            }
            for(auto &p: freq){
            nums.push_back(p.first);
            }
            sort(nums.begin(), nums.end(), [&](char a, char b) {
            if (freq[a] == freq[b])
                return a < b; 
            return freq[a] > freq[b];  // higher frequency first
            });

        return nums;
		}
};
