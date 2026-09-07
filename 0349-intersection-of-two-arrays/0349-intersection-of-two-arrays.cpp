class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
unordered_set<int> st(num1.begin(), num1.end());
vector<int> ans; 
        for(int i =0;i<num2.size();i++){
            if(st.find(num2[i])!=st.end()){
ans.push_back(num2[i]);
st.erase(num2[i]);
            }
        }
        return ans;
    }
};