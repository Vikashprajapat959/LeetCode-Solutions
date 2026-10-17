
class Solution {
public:

    int getdigitsum(int num) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> afterSorted(nums);

        auto lambda = [&](int num1, int num2) {
            int num1Digitsum = getdigitsum(num1);
            int num2Digitsum = getdigitsum(num2);

            if (num1Digitsum != num2Digitsum) {
                return num1Digitsum < num2Digitsum;
            }

            return num1 < num2;
        };

        sort(begin(afterSorted), end(afterSorted), lambda);

        unordered_map<int, int> index;

        for (int i = 0; i < n; i++) {
            index[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == afterSorted[i]) {
                continue;
            }

            int correctIndex = index[afterSorted[i]];

            index[nums[i]] = correctIndex;
            index[afterSorted[i]] = i;
            
            swap(nums[i], nums[correctIndex]);

            swaps++;
        }

        return swaps;
    }
};
