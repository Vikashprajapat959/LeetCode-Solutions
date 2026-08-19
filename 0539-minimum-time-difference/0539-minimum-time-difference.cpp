class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        // HH:MM ko total minutes me convert karo
        for (string time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3, 2));

            int total = hour * 60 + minute;
            minutes.push_back(total);
        }

        sort(minutes.begin(), minutes.end());

        int ans = INT_MAX;

        
        for (int i = 1; i < minutes.size(); i++) {
            ans = min(ans, minutes[i] - minutes[i - 1]);
        }

       
        int lastDiff = 1440 - minutes.back() + minutes[0];
        ans = min(ans, lastDiff);

        return ans;
    }
};