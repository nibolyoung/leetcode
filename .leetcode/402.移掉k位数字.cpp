/*
 * @lc app=leetcode.cn id=402 lang=cpp
 *
 * [402] 移掉K位数字
 */

// @lc code=start
class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        int n = num.size(), m = n - k;        
        for (char c : num) {
            while (k && s.size() && s.back() > c) {
                s.pop_back();
                --k;
            }
            s.push_back(c);
        }
        s.resize(m);
        while (!s.empty() && s[0] == '0') {
            s.erase(s.begin());
        }
        return s.empty() ? "0" : s;
    }
};
// @lc code=end

