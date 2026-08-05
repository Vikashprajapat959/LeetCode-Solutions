class Solution {
public:
bool isvalidcharcter(char ch ){
if(ch>='0' && ch<='9'){
    return true;
}
if(ch>='a' && ch<='z'){
    return true;
}
if(ch>='A' && ch<='Z'){
    return true;
}
return false;
}
string normaliseString(string &s){
    string newstr ="";
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        if(isvalidcharcter(ch)){
            if(ch>='A' && ch<='Z'){
       ch = ch -'A'+'a';
}
            newstr.push_back(ch);
        }

    }
    return newstr;
}
    bool isPalindrome(string s) {
        string  newStr = normaliseString(s);
        int i=0;
        int j= newStr.length()-1;
        while(i<=j){
     if(newStr[i]!=newStr[j] ){
        return false;
     }
     else{
        i++;
        j--;
     }
        }
        return true;
    }
};