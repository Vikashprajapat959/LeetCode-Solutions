class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize = matrix.size();
        int columnsize = matrix[0].size();
        int s =0;
    int totalelement = rowsize*columnsize;
        int e = totalelement-1;
        while(s<=e){
      int mid = (s+e)/2;
      int rowindex = mid/columnsize;
      int columnindex = mid%columnsize;
      if(matrix[rowindex][columnindex] ==target){
return true;
      }
      if(target>matrix[rowindex][columnindex]){
s = mid+1;
      }
     else{
        e = mid-1;
     }
        }
        return false;
    }
};