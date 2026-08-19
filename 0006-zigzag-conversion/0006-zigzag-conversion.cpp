class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        vector<string> rows(numRows);

        int row = 0;
        bool down = true;

        for (int i = 0; i < s.length(); i++) {

            rows[row].push_back(s[i]);

            if (row == numRows - 1) {
                down = false;
            }
            else if (row == 0) {
                down = true;
            }

            // Row move karo
            if (down) {
                row++;
            }
            else {
                row--;
            }
        }

        string ans = "";

        for (int i = 0; i < numRows; i++) {
            ans += rows[i];
        }

        return ans;
    }
};