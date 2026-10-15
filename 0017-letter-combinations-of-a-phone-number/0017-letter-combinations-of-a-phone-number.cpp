
class Solution {
public:
void solve( unordered_map<char, string>&mp,string&digits,string& output,vector<string>&ans,int i){
    if(i==digits.size()){
        ans.push_back(output);
        return;
    }
    char num = digits[i];
    string mappedstring = mp[num];
    for(int j=0;j<mappedstring.size();j++){
        char ch = mappedstring[j];
    output.push_back(ch);
    solve(mp, digits, output, ans, i + 1);
    output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};

        unordered_map<char, string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string output;
        vector<string>ans;
        solve(mp,digits,output,ans,0);
        return ans;
    }
};
