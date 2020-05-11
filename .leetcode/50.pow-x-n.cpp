/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
    double help(double x, long long N) {
        double ans = 1.0,y = x;
        while (N > 0) {
            if (N % 2 == 1)  ans *= y;
            y *= y;
            N /= 2;
        }
        return ans;
    }
public:
    double myPow(double x, int n) {
        long long N = n;
        return N >= 0 ? help(x, N) : 1.0 / help(x, -N);
    }
};
// @lc code=end

