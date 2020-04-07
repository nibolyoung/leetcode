/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string t) {
        string s = "#";
        for (auto c : t) {
            s += c;
            s += "#";
        }
        int N = s.size();
        vector<int> radius(N, 0);
        int C = 0;
        int R = 0;
        int max_center = -1;
        int max_radius = 0;
        for (int i = 0; i < N; ++i) {
            if (i < R) {
                radius[i] = min(R - i, radius[2 * C - i]);
            }
            while (i + radius[i] + 1 < N && i - radius[i] - 1 >= 0 &&
                    s[i + radius[i] + 1] == s[i - radius[i] - 1]) {
                ++radius[i];
            }
            if (radius[i] + i > R) {
                R = radius[i] + i;
                C = i;
            }
            if (radius[i] > max_radius) {
                max_radius = radius[i];
                max_center = i;
            }
        }
        string res;
        for (int i = -max_radius; i <= max_radius; ++i) {
            if (s[i + max_center] != '#') {
                res += s[i + max_center];
            }
        }
        return res;
    }
};
// @lc code=end

