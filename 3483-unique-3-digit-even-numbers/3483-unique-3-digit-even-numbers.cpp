class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int fre[10] = {0};
       
for(int i =0;i<digits.size();i++){
fre[digits[i]]++;
}
 int count = 0;
        for(int first =1;first<=9;first++){
            if(fre[first] == 0){
continue;
            }

            fre[first]--;

             for(int second =0;second<=9;second++){
            if(fre[second] == 0){
continue;
            }
            fre[second]--;

            for(int third =0;third<=9;third+=2){
            if(fre[third] == 0){
continue;
            }
            count++;
        }
        fre[second]++;
        }
        fre[first]++;
        }
        return count;
    }
};