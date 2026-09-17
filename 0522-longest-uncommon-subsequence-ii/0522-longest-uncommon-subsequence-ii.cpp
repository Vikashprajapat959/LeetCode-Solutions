#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    
    bool isSubsequence(const string& s1, const string& s2) {
        int i = 0, j = 0;
        int n = s1.length(), m = s2.length();
        while (i < n && j < m) {
            if (s1[i] == s2[j]) {
                i++;
            }
            j++;
        }
        return i == n;
    }

public:
    int findLUSlength(vector<string>& strs) {
       
        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
            return a.length() > b.length();
        });

        int n = strs.size();
        for (int i = 0; i < n; i++) {
            bool isUncommon = true;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                
              
                if (isSubsequence(strs[i], strs[j])) {
                    isUncommon = false;
                    break;
                }
            }
           
            if (isUncommon) {
                return strs[i].length();
            }
        }

        return -1;
    }
};