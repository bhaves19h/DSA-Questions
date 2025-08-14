string mySubstr(const string &s, int pos, int len) {

        string result  =  "";

        for (int i = pos ; i < pos + 3  && i < s.size() ; i++) {

            result  +=  s[i];

        }

        return result;
}
