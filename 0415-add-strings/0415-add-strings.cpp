class Solution {
public:
    string addStrings(string num1, string num2) {

        int i = num1.length() - 1;
        int j = num2.length() - 1;

        int carry = 0;
        string output = "";

        while (i >= 0 || j >= 0 || carry) {

            int val1 = 0;
            int val2 = 0;

            if (i >= 0) {
                val1 = num1[i] - '0';
            }

            if (j >= 0) {
                val2 = num2[j] - '0';
            }

            int sum = val1 + val2 + carry;

            carry = sum / 10;

            int digit = sum % 10;

            output = char(digit + '0') + output;

            i--;
            j--;
        }

        return output;
    }
};