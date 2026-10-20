
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> word;

        for (int i = 0; i < n; i++) {
            int t = words[i].size();
            
            for (int j = 0; j < t; j++) {
                if (words[i][j] == x) {
                    word.push_back(i);
                    break;
                }
            }
        }

        return word;
    }
};
