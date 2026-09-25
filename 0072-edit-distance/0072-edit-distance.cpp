// isko me dp se kiya hai
class Solution {
public:

    int solve(string &a, string &b, int i, int j, vector<vector<int>> &dp) {

        // Base Case
        if (i >= a.length()) {
            return b.length() - j;
        }

        if (j >= b.length()) {
            return a.length() - i;
        }

        // Already calculated
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        // Characters match
        if (a[i] == b[j]) {
            return dp[i][j] = solve(a, b, i + 1, j + 1, dp);
        }

        // Insert
        int option1 = 1 + solve(a, b, i, j + 1, dp);

        // Delete
        int option2 = 1 + solve(a, b, i + 1, j, dp);

        // Replace
        int option3 = 1 + solve(a, b, i + 1, j + 1, dp);

        return dp[i][j] = min(option1, min(option2, option3));
    }

    int minDistance(string word1, string word2) {

        int n = word1.length();
        int m = word2.length();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return solve(word1, word2, 0, 0, dp);
    }
};

//mene ye recursion se kiya hai isko
// class Solution {
// public:
//  int solve(string a, string b,int i,int j) {
//     if(i>=a.length()){
// return b.length() - j;    }
//      if(j>=b.length()){
//        return a.length() - i;
//     }
//     int ans =0;
//     if(a[i]==b[j]){
// ans = solve(a,b,i+1,j+1);
//     }
//     else{
//     int option1 = 1+solve(a,b,i,j+1);
//   int  option2 = 1+solve(a,b,i+1,j);
//   int  option3 = 1+solve(a,b,i+1,j+1);
//    ans = min(option1, min(option2, option3));
    

//  }
//  return ans;
//  }
//     int minDistance(string word1, string word2) {
//         int i = 0;
//         int j =0;
//         int ans = solve(word1,word2,i,j);
//         return ans;
//     }
// };