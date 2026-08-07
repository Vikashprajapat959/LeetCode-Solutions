class Solution {
public:

    bool checkPalindrome(string s, int i, int j) {
        while(i <= j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        while(i <= j) {

            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else {

                bool CaseOneAns = checkPalindrome(s, i, j - 1);
                bool CaseTwoAns = checkPalindrome(s, i + 1, j);

                return CaseOneAns || CaseTwoAns;
            }
        }

        return true;
    }
};