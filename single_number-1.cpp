// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int>ans;
    ans = {4,2,1,2,1};
    int xo = 0 ; 
    for(int i = 0 ; i< ans.size() ; i++){
        xo ^= ans[i];
    }
    cout<<xo ;
    return 0;
}
