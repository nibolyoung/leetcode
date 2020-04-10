/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string ans, str;
        vector<string> tmp;
        stringstream ss(s);
        while (ss >> str) tmp.push_back(str);
        for (int i = tmp.size() - 1; i >= 0; i--) ans += tmp[i] + " ";
        return ans.size() ? string(ans.begin(), ans.end() - 1) : "";
    }
};
// @lc code=end

