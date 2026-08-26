class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> answer(n, 1);

        // Left / Prefix product
        int prefix = 1;

        for (int i = 0; i < n; i++) {

            answer[i] = prefix;

            prefix = prefix * nums[i];
        }

        // Right / Suffix product
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--) {

            answer[i] = answer[i] * suffix;

            suffix = suffix * nums[i];
        }

        return answer;
    }
};