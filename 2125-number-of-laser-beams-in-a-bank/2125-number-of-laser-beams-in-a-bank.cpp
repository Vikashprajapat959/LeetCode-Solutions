class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

       int n = bank.size();
       int prevDeviceCount = 0;
       int result = 0;
       for(int i =0;i<n;i++){
        int currentDeviceCount = 0;
        for(int j =0;j<bank[i].size();j++){
          if(bank[i][j]=='1'){
            currentDeviceCount++;
          }
        }
        result = result + (prevDeviceCount * currentDeviceCount);
        if(currentDeviceCount!=0){
     prevDeviceCount = currentDeviceCount;
        }
       }
return result;
    }
};