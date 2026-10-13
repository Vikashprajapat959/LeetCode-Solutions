class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end());
        long long largehafe = accumulate(begin(nums)+n/2,end(nums),0LL);
        long long smallhafe = accumulate(begin(nums),begin(nums)+n/2,0LL);
        
        return largehafe-smallhafe;
    }
};