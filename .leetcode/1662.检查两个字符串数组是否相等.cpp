/*
 * @lc app=leetcode.cn id=1662 lang=cpp
 *
 * [1662] 检查两个字符串数组是否相等
 */

// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",t="";
        for(auto i:word1) s+=i;
        for(auto j:word2) t+=j;
        return (s.compare(t)==0);
    }
};
// @lc code=end

