class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        if(s[0] == '-'){
            std::reverse(s.begin() + 1, s.end());
        }
        else {
            std::reverse(s.begin() , s.end());
        }
        try{
            return stoi(s);
        }catch(const out_of_range &e){
            return 0;
        }

        
/*
        int reversed =0;
        while(x != 0 && x <INT_MAX){
        int digit = x % 10;
            if (reversed > INT_MAX / 10 || (reversed < INT_MIN / 10)) {
                return 0; // Overflow for positive numbers
            }
        reversed = reversed*10+digit;
        x = x/10;
        }   
        return reversed;*/
    }
};