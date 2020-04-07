/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Add and Search Word - Data structure design
 */

// @lc code=start
class WordDictionary {
    vector<string> s;
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        s.clear();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        s.push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        for(auto str:s){
            if(word.length()<=str.length()){
                for(int i=0;i<str.length()-word.length();i++){
                    bool has=true;
                    for(int j=0;j<word.length();j++){
                        if(word[j]!='.'){
                            if(word[j]!=str[i+j]){
                                has=false;
                                break;
                            }
                        }
                    }
                    if(has)  return true;
                }
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end

