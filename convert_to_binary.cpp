// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string covtobinary(int n){
    string res= "";
    while( n > 0){
        if(n % 2 == 1){
            res += '1';
        }
        else{    
          res += '0';
        }
      n= n/2;
    }
   reverse(res.begin(), res.end());
    return res;
}

int main() {
    int a = 5;
    cout << covtobinary(a);
    return 0;
}
