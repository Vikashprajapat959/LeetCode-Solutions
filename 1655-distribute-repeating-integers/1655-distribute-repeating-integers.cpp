class Solution {
public:
bool canDistributehelper(vector<int>& counts, vector<int>& quantity,int ithcustomer){
//base condition
if(ithcustomer==quantity.size()){
return true;
}
for(int i =0;i<counts.size();i++){
if(counts[i]>=quantity[ithcustomer]){
counts[i] -=quantity[ithcustomer];
if(canDistributehelper(counts,quantity,ithcustomer+1)){
return true;
}
counts[i] +=quantity[ithcustomer];
}
}
return false;
}
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
      unordered_map<int,int> countMap;
     for (auto num : nums) {
    countMap[num]++;
     }
    vector<int> counts;

    for (auto it : countMap) {
        counts.push_back(it.second);
        sort(quantity.rbegin(),quantity.rend());
    }

return canDistributehelper(counts, quantity, 0);
        }
};