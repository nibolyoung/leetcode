/*
 * @lc app=leetcode.cn id=1546 lang=cpp
 *
 * [1546] 和为目标值的最大数目不重叠非空子数组数目
 */

// @lc code=start
class Solution {
public:
    int maxNonOverlapping(vector<int> &nums, int target) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0, end = -1;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.find(sum - target) != mp.end()) {
                if (mp[sum - target] + 1 > end)  res++,end = i;
            }
            mp[sum] = i;
        }
        return res;
    }
};
// @lc code=end

