
class Solution {
public:
    bool findemptyCell(vector<vector<char>>& board, int& row, int& col) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    row = i;
                    col = j;
                    return true;
                }
            }
        }
        return false;
    }

    bool issafe(vector<vector<char>>& board, int row, int col, char num) {
        // Check row
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == num) {
                return false;
            }
        }

        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) {
                return false;
            }
        }

        // Check 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) {
                    return false;
                }
            }
        }

        return true;
    }

    bool solveSudokuhelper(vector<vector<char>>& board) {
        int row, col;

        if (!findemptyCell(board, row, col)) {
            return true;
        }

        for (int i = 1; i <= 9; i++) {
            char num = i + '0';

            if (issafe(board, row, col, num)) {
                board[row][col] = num;

                if (solveSudokuhelper(board)) {
                    return true;
                }

                // Backtracking
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solveSudokuhelper(board);
    }
};
