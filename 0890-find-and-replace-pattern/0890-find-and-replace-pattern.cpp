
class Solution {
public:

    string normaliseString(string& str) {

        char start = 'a';
        unordered_map<char, char> mapping;

        for (int i = 0; i < str.length(); i++)   {

            char ch = str[i];

            if (mapping.find(ch) == mapping.end()) {
                mapping[ch] = start;
                start++;
            }
        }

        string ansString = "";

        for (int i = 0; i < str.length(); i++) {

            char ch = str[i];

            char mappedCharacter = mapping[ch];

            ansString.push_back(mappedCharacter);
        }

        return ansString;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> ans;

        string newPattern = normaliseString(pattern);

        for (int i = 0; i < words.size(); i++) {

            string currentWord = words[i];

            string newcurrentWord = normaliseString(currentWord);

            if (newPattern == newcurrentWord) {

                ans.push_back(currentWord);
            }
        }

        return ans;
    }
};
