class Solution { 
public: 
void combinationSum_helper(vector<int>& nums,int target, vector<vector<int>> &ans,vector<int> &v,int index){ 
    if(target == 0){ 
        ans.push_back(v); 
        return; 
    } 
    if(target<0){ 
return; 
    } 
    unordered_map<int,bool> visited; 
    for(int i =index;i<nums.size();i++){ 
        if(visited.find(nums[i])!=visited.end()){ 
            continue; 
        } 
         visited[nums[i]] = true; 
        v.push_back(nums[i]); 
        combinationSum_helper(nums,target-nums[i],ans,v,i+1); 
        v.pop_back(); 
    } 
} 
    vector<vector<int>> combinationSum2(vector<int>& nums,int target) {  
         vector<vector<int>> ans; 
         vector<int> v; 
         sort(nums.begin(), nums.end());
         combinationSum_helper(nums,target,ans,v,0); 
         return ans; 
    } 
}; 