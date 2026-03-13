vector<int> prevSmaller(vector<int>& arr){
    stack<int> st;
    vector<int> ans(arr.size(), -1);
    for(int i = 0; i < arr.size(); i++){
        while(!st.empty() && arr[st.top()] > arr[i])
            st.pop();
        if(!st.empty())
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int>& arr){
    stack<int> st;
    vector<int> ans(arr.size(), arr.size());
    for(int i = arr.size()-1; i >= 0; i--){
        while(!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        if(!st.empty())
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int sumSubarrayMins(vector<int>& arr) {
    vector<int> prevS = prevSmaller(arr);
    vector<int> nextS = nextSmaller(arr);
    long long ans = 0;
    int mod = 1e9 + 7;

    for(int i = 0; i < arr.size(); i++){
        long long leftElements = i - prevS[i];
        long long rightElements = nextS[i] - i;
        // this formula is arrived by mathematical calculation
        ans += ((leftElements % mod) * (rightElements % mod) * (arr[i] % mod)) % mod;
    }

    return (int)ans;
}
