class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int elesum = 0;
         int digitsum = 0;
        for(int i=0;i<n;i++){
             elesum+=nums[i];
             int num = nums[i];
            while(num>0){
                int digit = num%10;
                digitsum+= digit;
                num = num/10;
            }
        }
        return abs(elesum-digitsum);
    }
};