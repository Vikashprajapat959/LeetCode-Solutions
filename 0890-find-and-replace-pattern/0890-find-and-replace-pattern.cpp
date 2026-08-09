class Solution {
public:
void normaliseString(string&str){
    char start = 'a';
    unordered_map<char,char>mapping;
    for(int i =0;i<str.length();i++){
        char ch = str[i];
        if(mapping.find(ch) ==mapping.end()){
         mapping[ch] = start; 
         start++;
        }

    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        char mappedCharacter = mapping[ch];
        str[i] = mappedCharacter;
    }

}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        normaliseString(pattern);
        for(int i =0;i<words.size();i++){
            string currentWord = words[i];
        normaliseString(currentWord);

if(pattern==currentWord){
    ans.push_back(words[i]);
}
        }
        return ans;
    }
};