class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end());
        long long largedata = 0;
        for(int i =n/2;i<n;i++){
            largedata = largedata+nums[i];
        }
         long long smalldata = 0;
        for(int i =0;i<n/2;i++){
            smalldata = smalldata+nums[i];
        }
                return largedata-smalldata;

    }
};