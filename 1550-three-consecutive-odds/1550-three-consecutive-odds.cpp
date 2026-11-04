class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int total = 0;
        for(int i =0;i<n;i++){
            if(arr[i]%2 !=0){
                total++;
            }
            else{
                total =0;
            }
            if(total == 3) {
                return true;
            }
    }
    return false;
    }
};