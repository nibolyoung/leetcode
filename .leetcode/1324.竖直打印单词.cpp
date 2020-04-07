/*
 * @lc app=leetcode.cn id=1324 lang=cpp
 *
 * [1324] 竖直打印单词
 */

// @lc code=start
class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream in(s);
        vector<string> words;
        string _word;
        int maxlen = 0;
        while (in >> _word) {
            words.push_back(_word);
            maxlen = max(maxlen, (int)_word.size());
        }
        vector<string> ans;
        for (int i = 0; i < maxlen; ++i) {
            string concat;
            for (string& word: words) {
                concat += (i < word.size() ? word[i] : ' ');
            }
            while (concat.back() == ' ') {
                concat.pop_back();
            }
            ans.push_back(move(concat));
        }
        return ans;
    }
};
// @lc code=end

