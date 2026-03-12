class RecentCounter {
public:
queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        int val = t-3000;
        while(!q.empty() && q.front()<val){
            q.pop(); 
        }         
    return q.size();
    }
};
