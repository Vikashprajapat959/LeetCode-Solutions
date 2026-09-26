class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        int n = s.length();

        unordered_map<string, string> mp;
        for(int i =0;i<knowledge.size();i++){
            string key = knowledge[i][0];
             string value = knowledge[i][1];
             mp[key] = value
    ;    }
        string result = "";

        int i = 0;

        while (i < n) {

            if (s[i] == '(') {

                int j = s.find(")", i + 1);

                string temp = s.substr(i + 1, j - i - 1);

                result += mp.count(temp) ? mp[temp] : "?";

                i = j;
            }
            else {
                result.push_back(s[i]);
            }

            i++;
        }

        return result;
    }
};