/*
 * @lc app=leetcode.cn id=718 lang=cpp
 *
 * [718] 最长重复子数组
 */

// @lc code=start
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        vector<int> dp(B.size() + 1, 0);
		int res = 0;
		for (int i = 1; i <= A.size(); i++)
			for (int j = B.size(); j > 0; j--) {
				if (A[i - 1] == B[j - 1]) {
					dp[j] = dp[j - 1] + 1;					
					if (dp[j] > res)  res = dp[j];
				} else  dp[j] = 0;
			}
		return res;
    }
};
// @lc code=end

