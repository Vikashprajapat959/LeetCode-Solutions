class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Frequency count
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Step 2: Bucket
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it = freq.begin(); it != freq.end(); it++) {

            int element = it->first;
            int count = it->second;

            bucket[count].push_back(element);
        }

        // Step 3: Highest frequency se elements uthao
        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--) {

            for (int j = 0; j < bucket[i].size(); j++) {

                ans.push_back(bucket[i][j]);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};