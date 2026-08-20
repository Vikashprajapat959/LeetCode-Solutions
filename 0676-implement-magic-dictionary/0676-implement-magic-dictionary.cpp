class MagicDictionary {
public:

    vector<string> words;

    MagicDictionary() {
        
    }

    void buildDict(vector<string> dictionary) {
        words = dictionary;
    }

    bool search(string searchWord) {

        for(string word : words) {

            // Length different hai to possible nahi
            if(word.length() != searchWord.length()) {
                continue;
            }

            int diff = 0;

            for(int i = 0; i < word.length(); i++) {

                if(word[i] != searchWord[i]) {
                    diff++;
                }
            }

            // Exactly 1 character different hona chahiye
            if(diff == 1) {
                return true;
            }
        }

        return false;
    }
};