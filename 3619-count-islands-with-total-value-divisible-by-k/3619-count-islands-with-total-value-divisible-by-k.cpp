class Solution {
public:
    int n, m;
    long long dfs(vector<vector<int>>& grid, int r, int c) {
        if(r<0||r>=n||c<0||c>=m||grid[r][c]==0){
return 0;
        }
        long long value = grid[r][c];
        grid[r][c] =0;
       long long left = dfs(grid, r, c - 1);
        long long right = dfs(grid, r, c + 1);
        long long top = dfs(grid, r - 1, c);
        long long bottom = dfs(grid, r + 1, c);
          return value + left + right + top + bottom;

    }

    int countIslands(vector<vector<int>>& grid, int k) {
        n = grid.size();
        m = grid[0].size();
        int count =0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]>0){
                    long long island = dfs(grid,i,j);
                    if(island % k ==0){
                        count++;
                    }
                }
            }
        }
        return count;
}
};