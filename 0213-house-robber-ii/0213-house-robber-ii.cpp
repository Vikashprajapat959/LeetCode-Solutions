//or ye dp see kiya  hai isme pure test cases pass ho gye hai 
class Solution {
public:

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        int case1 = robRange(nums, 0, n - 2);
        int case2 = robRange(nums, 1, n - 1);

        return max(case1, case2);
    }

    int robRange(vector<int>& nums, int start, int end) {

        int prev2 = 0;
        int prev1 = 0;

        for (int i = start; i <= end; i++) {

            int robCurrent = nums[i] + prev2;

            int skipCurrent = prev1;

            int current = max(robCurrent, skipCurrent);

            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};

//ye recursion se kiya hai mene isme pure test case pass nhi ho rhe hai  
// class Solution {
// public:
//     int solve(vector<int>& nums, int s,int e) {

//         // Base case
//         if (s >e) {
//             return 0;
//         }

//         // Include
//         int option1 = nums[s] + solve(nums, s + 2,e);

//         // Exclude
//         int option2 = 0+solve(nums, s+ 1,e);

//         // Maximum answer
//         int finalAns = max(option1, option2);

//         return finalAns;
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1){
// return nums[0];
//         }
//         int option1 = solve(nums,0,n-2);
//         int option2 = solve(nums,1,n-1);
//         int ans = max(option1,option2);
//         return ans;
//     }
// };