#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        
        // यदि स्ट्रिंग की लंबाई 10 से कम है, तो कोई 10-letter सबस्ट्रिंग संभव नहीं है
        if (s.length() < 10) {
            return result;
        }
        
        unordered_map<string, int> countMap;
        
        for (int i = 0; i <= s.length() - 10; i++) {
            string sub = s.substr(i, 10);
            countMap[sub]++;
        }
        
        for (auto const& [substring, count] : countMap) {
            if (count > 1) {
                result.push_back(substring);
            }
        }
        
        return result;
    }
};
