vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    for (int i = 0; i < asteroids.size(); i++) {
        int siz = abs(asteroids[i]);

        // Phase 1: pop all right-going asteroids SMALLER than current left-going
        while (!st.empty() && (st.top() > 0 && asteroids[i] < 0) && (st.top() < siz)) {
            st.pop(); // smaller right-going asteroid explodes
        }

        // Phase 2: equal size → both explode (pop top, don't push current)
        if (!st.empty() && (st.top() > 0 && asteroids[i] < 0) && st.top() == siz) {
            st.pop(); // both gone, do nothing else
        }
        // Phase 3: no collision OR current survived → push
        else if (st.empty() || !(st.top() > 0 && asteroids[i] < 0)) {
            st.push(asteroids[i]);
            // This covers: positive asteroid, or left-going with empty/negative top
        }
        // Implicit case: stack top > current size → current is destroyed (no push)
    }

    // Build result — stack is bottom-to-top, need to reverse
    vector<int> ans;
    while (!st.empty()) { ans.push_back(st.top()); st.pop(); }
    reverse(ans.begin(), ans.end());
    return ans;
}
