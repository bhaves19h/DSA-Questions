
class Solution {
public:
   int numRabbits(vector<int>& answers) {
    unordered_map<int, int> freq; //key rabits answer //how many times that answer appear
    int total = 0;
    for (int answer : answers) {
        freq[answer]++;   //grouping the rabbits
    }
   
    for (auto& pair : freq) {
    int answer = pair.first;     
    int count = pair.second;
    int groupSize = answer+1;
    int groups = (count + groupSize -1 ) / groupSize;
    total += groups * groupSize;
    
}
    return total;
}

};