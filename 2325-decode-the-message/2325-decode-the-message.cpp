
class Solution {
public:
void  createMapping(unordered_map<char,char>& mapping,string key){
char start = 'a';
for(int i =0;i<key.length();i++){
char ch = key[i];
if(ch == ' '){
     continue;
}
if (mapping.find(ch) == mapping.end()) { 
    mapping[ch] = start; 
    start++;
     }
}
}
string useMapping(unordered_map<char, char>& mapping, string message) {
     string ans = "";
      for (int i = 0; i < message.length(); i++) {
         char ch = message[i];
          ans.push_back(mapping[ch]);
           } 
           return ans; 
           }

    string decodeMessage(string key, string message) {
       unordered_map<char,char> mapping;
       mapping[' ']=' ';
       createMapping(mapping, key);
       string ans = useMapping(mapping, message);
        return ans;
    }
   
};