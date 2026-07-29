class Solution {
    int binary(vector<int>& nums, int start, int x) {
        int s = start;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == x) {
                return mid;
            }
            else if (nums[mid] < x) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return -1;
    }

public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        set<pair<int, int>> ans;

        for (int i = 0; i < nums.size(); i++) {
            int index = binary(nums, i + 1, nums[i] + k);

            if (index != -1) {
                ans.insert({nums[i], nums[index]});
            }
        }

        return ans.size();
    }
};