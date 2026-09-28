class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> lastskiplength;
        string result;
        for(int i=0;i<s.length();i++){
char ch = s[i];
if(ch =='('){
    lastskiplength.push(result.size());
}
else if(ch == ')'){
    int l = lastskiplength.top();
     lastskiplength.pop();
     reverse(result.begin()+l,result.end());
}
else{
    result.push_back(ch);
}
        }
        return result;
    }
};
