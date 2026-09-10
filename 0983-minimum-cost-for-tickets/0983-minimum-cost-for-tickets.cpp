#include <vector>
#include <algorithm>

class Solution {
private:
    int solve(int index, const std::vector<int>& days, const std::vector<int>& costs, std::vector<int>& memo) {
        int n = days.size();
        if (index >= n) return 0;
        if (memo[index] != -1) return memo[index];

        int option1 = costs[0] + solve(index + 1, days, costs, memo);

        int j = index;
        while (j < n && days[j] < days[index] + 7) j++;
        int option2 = costs[1] + solve(j, days, costs, memo);

        int k = index;
        while (k < n && days[k] < days[index] + 30) k++;
        int option3 = costs[2] + solve(k, days, costs, memo);

        return memo[index] = std::min({option1, option2, option3});
    }

public:
    int mincostTickets(std::vector<int>& days, std::vector<int>& costs) {
        std::vector<int> memo(days.size(), -1);
        return solve(0, days, costs, memo);
    }
};
