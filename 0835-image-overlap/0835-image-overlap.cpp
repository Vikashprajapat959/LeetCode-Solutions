class Solution {
public:

    int countOverlaps(vector<vector<int>>& A, vector<vector<int>>& B,
                      int rowOff, int colOff) {

        int n = A.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int new_i = i + rowOff;
                int new_j = j + colOff;

                if (new_i >= 0 && new_i < n &&
                    new_j >= 0 && new_j < n) {

                    if (A[i][j] == 1 && B[new_i][new_j] == 1) {
                        count++;
                    }
                }
            }
        }

        return count;
    }

    int largestOverlap(vector<vector<int>>& A,
                       vector<vector<int>>& B) {

        int n = A.size();

        int maxOverlap = 0;

        for (int rowOff = -n + 1; rowOff < n; rowOff++) {

            for (int colOff = -n + 1; colOff < n; colOff++) {

                int count = countOverlaps(A, B, rowOff, colOff);

                maxOverlap = max(maxOverlap, count);
            }
        }

        return maxOverlap;
    }
};