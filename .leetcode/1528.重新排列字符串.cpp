/*
 * @lc app=leetcode.cn id=1528 lang=cpp
 *
 * [1528] 重新排列字符串
 */

// @lc code=start
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string t=s;
        for(int i=0;i<indices.size();i++)  t[indices[i]]=s[i];
        return t;
    }
};
// @lc code=end

