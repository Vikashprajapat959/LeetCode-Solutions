class Solution {
public:
int findsum(int n){
    int ans =0;
    while(n!=0){
        int digit = n%10;
        ans = ans + digit;
        n = n/10;
    }
    return ans;
}
int findproduct(int n){
    int ans =1;
    while(n!=0){
        int digit = n%10;
        ans = ans*digit;
        n = n/10;
    }
    return ans;
}
    bool checkDivisibility(int n) {
        int sum = findsum(n);
        int product  = findproduct(n);
        if(n%(sum+product)==0){
return true;
        }
        else{
            return false;
        }
    }
};