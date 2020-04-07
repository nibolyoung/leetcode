/*
 * @lc app=leetcode.cn id=1248 lang=cpp
 *
 * [1248] 统计「优美子数组」
 */

// @lc code=start
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0, j = 0, odd_cnt = 0,res = 0, tmp = 0;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) odd_cnt++;
            while (odd_cnt == k) {
                tmp++;
                if (nums[j] % 2 == 1) odd_cnt--;
                j++;
            }
            res += tmp;
            i++;
            while (i < nums.size() && nums[i] % 2 == 0) {
                res += tmp;
                i++;
            }
            i--;
            tmp = 0;
        }
        return res;
    }
};
// @lc code=end

