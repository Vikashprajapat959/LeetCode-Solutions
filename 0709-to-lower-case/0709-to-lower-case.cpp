class Solution {
public:
    string toLowerCase(string s) {
        string newstr ="";
        for(int i =0;i<s.length();i++){
            char ch = s[i];
            if(ch >='A'&& ch <='Z'){
                ch = ch -'A'+'a';
            }
               newstr.push_back(ch);
        }
        return newstr;
    }
};