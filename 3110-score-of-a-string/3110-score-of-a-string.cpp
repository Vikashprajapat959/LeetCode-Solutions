class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int n = s.size();

        for (int i = 1; i < n; i++) {
            char current = s[i];
            char previous = s[i - 1];

            int currentValue = (int)current;
            int previousValue = (int)previous;

            int difference = currentValue - previousValue;

            if (difference < 0) {
                difference = difference * -1;
            }

            score = score + difference;
        }

        return score;
    }
};