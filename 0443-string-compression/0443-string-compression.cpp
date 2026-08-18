class Solution {
public:
    int compress(vector<char>& s) {
   int n = s.size();
   int index=0;
   int i =0;
   while(i<n){
char curr_char = s[i];
int count =0;
while(i<n && curr_char==s[i]){
    count++;
    i++;
    }
    s[index]= curr_char;
    index++;
    if(count>1){
string count_str = to_string(count);
for(int j =0;j<count_str.length();j++){
s[index]= count_str[j];
index++;
}
    }
   }
   return index;
    }
};