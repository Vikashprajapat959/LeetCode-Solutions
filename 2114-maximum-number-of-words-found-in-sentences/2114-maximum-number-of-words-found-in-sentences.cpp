class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxSpaces = 0;
        for (const string& s : sentences) {
            int currentSpaces = 0;
            for (char c : s) {
                if (c == ' ') {
                    currentSpaces++;
                }
            }
            maxSpaces = max(maxSpaces, currentSpaces);
        }
        return maxSpaces + 1;
    }
};
