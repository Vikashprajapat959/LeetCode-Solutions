
class Solution {
public:
bool findemptyCell(vector<vector<char>>& board,int&row,int&col){
    for(int i =0;i<9;i++){
for(int j =0;j<9;j++){
    if(board[i][j]=='.'){
           row = i;
        col = j;
        return true;
    }
}
    }
    return false;
}
bool issafe(vector<vector<char>>& board,int row,int col,char num){
    for(int j=0;j<9;j++){
       if( board[row][j]==num){
        return false;
       }
    }
     for(int i=0;i<9;i++){
       if( board[i][col]==num){
        return false;
       }
    }
    int startrow = row-(row%3);
    int startcol = col-(col%3);
    for(int i =0;i<3;i++){
for(int j = 0;j<3;j++){
  int r = startrow + i;
int c = startcol + j;
    if(board[r][c]==num){
return false;
    }
}
    }
    return true;
}
bool solveSudokuhelper(vector<vector<char>>& board) {
    int row,col;
    if(!findemptyCell(board,row,col)){
        return true;
    }
    for(int i=1;i<=9;i++){
    char num = i + '0';
        if(issafe(board,row,col,num)){
            board[row][col] = num;
        
        if(solveSudokuhelper(board)){
            return true;
        }
        board[row][col]='.';
    }
    }
return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        solveSudokuhelper(board);
    }
};
