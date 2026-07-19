class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rowInOriginalArray = matrix.size();
        int columnInOriginalArray = matrix[0].size();

        vector<vector<int>> rotate(
            columnInOriginalArray,
            vector<int>(rowInOriginalArray, 0)
        );

        // Transpose
        for (int i = 0; i < columnInOriginalArray; i++) {
            for (int j = 0; j < rowInOriginalArray; j++) {
                rotate[i][j] = matrix[j][i];
            }
        }

        // Reverse every row
        for (int i = 0; i < rotate.size(); i++) {
            reverse(rotate[i].begin(), rotate[i].end());
        }

        matrix = rotate;   // <-- Bas ye add kiya
    }
};