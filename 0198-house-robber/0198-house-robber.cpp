class Solution {
public:

    int solve(vector<int>& nums, int s, int e, vector<int>& dp) {

        if (s > e) {
            return 0;
        }

        if (dp[s] != -1) {
            return dp[s];
        }

        int option1 = nums[s] + solve(nums, s + 2, e, dp);

        int option2 = solve(nums, s + 1, e, dp);

        dp[s] = max(option1, option2);

        return dp[s];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n, -1);

        return solve(nums, 0, n - 1, dp);
    }
};




//recursion se kiya
// class Solution {
// public:
// int solve(vector<int>& nums, int s,int e) {
//     if(s>e){
// return 0; 
//     }
//     int option1 = nums[s]+solve(nums,s+2,e);
//  int option2 = 0+solve(nums,s+1,e);
//  int ans = max(option1,option2);
//  return ans;
// }   
//     int rob(vector<int>& nums) {
// int n = nums.size();
// int s = 0;
// int e = n-1;
// int ans = solve(nums,s,e);
// return ans;
// }};