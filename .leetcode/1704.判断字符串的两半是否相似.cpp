/*
 * @lc app=leetcode.cn id=1704 lang=cpp
 *
 * [1704] 判断字符串的两半是否相似
 */

// @lc code=start
class Solution {
public:
    bool halvesAreAlike(string s) {
        int a = 0, b = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                if (i < (s.length() / 2))   a++;
                else  b++;
            }
        }
        return a == b;
    }
};
// @lc code=end

