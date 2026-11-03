class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = nums[0];
        int moves = 0;
        for(int i =0;i<n;i++){
            moves+=abs(nums[i]-start);
        }
        return moves;
    }
};