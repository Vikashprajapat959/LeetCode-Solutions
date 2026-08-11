class Solution {
public:
    string reorganizeString(string s) {

        int map[256] = {0};

        // 1. Frequency count
        for(int i = 0; i < s.size(); i++) {
            map[s[i]]++;
        }

        // 2. Find maximum frequency character
        char max_freq_char;
        int max_freq = INT_MIN;

        for(int i = 0; i < 256; i++) {
            if(map[i] > max_freq) {
                max_freq = map[i];
                max_freq_char = i;
            }
        }

        // 3. Impossible case
        if(max_freq > (s.size() + 1) / 2) {
            return "";
        }

        // 4. Put maximum frequency character
        int index = 0;

        while(max_freq > 0) {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }

        map[max_freq_char] = 0;

        // 5. Put remaining characters
        for(int i = 'a'; i <= 'z'; i++) {

            while(map[i] > 0) {

                if(index >= s.size()) {
                    index = 1;
                }

                s[index] = i;
                map[i]--;

                index += 2;
            }
        }

        return s;
    }
};