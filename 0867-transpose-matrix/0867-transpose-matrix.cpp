class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowInOriginalArray = matrix.size();
         int columnInOriginalArray = matrix[0].size();
         int rowoftransposeMatrix = columnInOriginalArray;
         int columnoftransposeMatrix = rowInOriginalArray;
          vector<vector<int>>transpose(rowoftransposeMatrix ,vector<int>(columnoftransposeMatrix,0));
         for(int i = 0;i<rowoftransposeMatrix;i++){
            for(int j=0;j<columnoftransposeMatrix;j++){
                transpose[i][j] = matrix[j][i];
            }
         }
return transpose;
    }
};