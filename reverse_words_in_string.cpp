// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
string reverseWord(string s){
    string ans = "";
    vector<string> res;
    int i = 0, n =s.size();
    while(i<n && s[i] == ' '){
        i++; //skip
      string word = "";
      while(i<n){
          if(s[i] != ' '){
              word += s[i];
          }
          else{
              if(word != ""){
                  res.push_back(word);
              }
              word ="";
          }
          i++;
      }
    if (word != "") res.push_back(word);
    }
    int m = res.size();
    for(int i = m-1 ; i>=0 ;i--){
        ans += res[i];
        if(i != 0){
            ans += " ";
        }
    }
    return ans;
}

int main() {
    // Write C++ code here
   reverseWord("my name is bhavesh ");

    return 0;
}
