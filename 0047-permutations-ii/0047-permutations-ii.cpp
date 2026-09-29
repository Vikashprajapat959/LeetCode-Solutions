class Solution {
public:

    void permuteUniqueHelper(vector<int>& nums,
                             vector<vector<int>>& ans,
                             int start) {

        // Base case
        if(start == nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_map<int, bool> visited;

        for(int i = start; i < nums.size(); i++) {

            // Agar current level par ye number already use ho chuka hai
            if(visited.find(nums[i]) != visited.end()) {
                continue;
            }

            // Mark as visited
            visited[nums[i]] = true;

            // Swap
            swap(nums[i], nums[start]);

            // Recursion
            permuteUniqueHelper(nums, ans, start + 1);

            // Backtracking
            swap(nums[i], nums[start]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>> ans;

        permuteUniqueHelper(nums, ans, 0);

        return ans;
    }
};