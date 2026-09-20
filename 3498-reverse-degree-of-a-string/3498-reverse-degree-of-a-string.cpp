class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            int index = i+1;
            int revers = 26-(ch-'a');
            int value = revers*index;
            ans = ans+value;

        }
        return ans;
    }
};