class Solution {
public:
    int solve(int number) {
        int ans = 0;

        while (number > 0) {
            int a = number % 10;
            ans += a;
            number /= 10;
        }

        return ans;
    }

    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int number = solve(nums[i]);

            if (number == i)
                return i;
        }

        return -1;
    }
};