class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {

            int mid = s + (e - s) / 2;

            // mid ko even index par lao
            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                // Pair correct hai
                s = mid + 2;
            }
            else {
                // Single element left side mein hai
                e = mid;
            }
        }

        return nums[s];
    }
};