class Solution {
public:
void merge(vector<int>&v, vector<int>&Output,int start,int end,int mid){
    int i = start;
    int j = mid+1;
    int k = start;
    while(i<=mid && j<=end){
        if(v[i]<=v[j]){
  Output[k++] = v[i++];
        }
        else{
            Output[k++] = v[j++];
        }
    }
    while(i<=mid){
        Output[k++] = v[i++];
    }
    while(j<=end){
  Output[k++] = v[j++];
    }
    for(int x =start;x<=end;x++){
        v[x] = Output[x];
    }
}
void mergeshot(vector<int>&v, vector<int>&Output,int start,int end){
    if(start>=end){
        return;
    }
    int mid = start + (end - start) / 2;
    mergeshot(v,Output,start,mid);
      mergeshot(v,Output,mid+1,end);
      merge(v,Output,start,end,mid);

}
    vector<int> sortArray(vector<int>& nums) {
        vector<int>Output(nums.size());
       mergeshot(nums, Output, 0, nums.size() - 1);
       return nums;

    }
};