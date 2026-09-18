using namespace std;

class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.length();
        vector<int> first(26, -1);
        vector<int> last(26, -1);
        
        for (int i = 0; i < n; ++i) {
            int charIdx = s[i] - 'a';
            if (first[charIdx] == -1) {
                first[charIdx] = i;
            }
            last[charIdx] = i;
        }
        
        vector<pair<int, int>> valid_intervals;
        
        for (int c = 0; c < 26; ++c) {
            if (first[c] == -1) continue;
            
            int l = first[c];
            int r = last[c];
            bool is_valid = true;
            
            for (int i = l; i <= r; ++i) {
                int innerCharIdx = s[i] - 'a';
                r = max(r, last[innerCharIdx]);
                if (first[innerCharIdx] < l) {
                    is_valid = false;
                    break;
                }
            }
            
            if (is_valid) {
                valid_intervals.push_back({l, r});
            }
        }
        
        sort(valid_intervals.begin(), valid_intervals.end());
        
        vector<string> ans;
        int prev_end = -1;
        
        for (auto& interval : valid_intervals) {
            int l = interval.first;
            int r = interval.second;
            
            if (l > prev_end) {
                ans.push_back(s.substr(l, r - l + 1));
                prev_end = r;
            }
            else if (r <= prev_end) {
                ans.back() = s.substr(l, r - l + 1);
                prev_end = r;
            }
        }
        
        return ans;
    }
};