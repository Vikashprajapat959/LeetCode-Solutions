class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string ans = "";
            for(int i = 0;i<s.size();i = i+k){
                int sum = 0;
                 for (int j = i; j < i + k && j < s.length(); j++) {
                    int digit  = s[j]-'0';
                    sum = sum+digit;
                }
                  ans = ans + to_string(sum);
            }
                    s = ans;
        }
            return s;
    }
};