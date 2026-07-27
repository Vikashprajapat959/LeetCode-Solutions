class Solution {
    long long solve(long long dividend, long long divisor){
        long long s = 0;
        long long e = dividend;
        long long ans = -1;

        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long product = 1LL * divisor * mid;

            if(product == dividend)
                return mid;

            if(product > dividend){
                e = mid - 1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }

public:
    int divide(int dividend, int divisor) {

        if(divisor == 0)
            return INT_MAX;

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long ans = solve(llabs((long long)dividend),
                              llabs((long long)divisor));

        if((dividend > 0 && divisor > 0) ||
           (dividend < 0 && divisor < 0))
            return ans;

        return -ans;
    }
};