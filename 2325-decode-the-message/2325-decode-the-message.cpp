class Solution {
public:
    string decodeMessage(string key, string message) {

        char arr[26] = {0};
        int index = 0;

        for (char ch : key) {

            if (ch == ' ')
                continue;

            if (arr[ch - 'a'] == 0) {
                arr[ch - 'a'] = 'a' + index;
                index++;
            }
        }

        for (int i = 0; i < message.length(); i++) {

            if (message[i] != ' ') {
                message[i] = arr[message[i] - 'a'];
            }
        }

        return message;
    }
};