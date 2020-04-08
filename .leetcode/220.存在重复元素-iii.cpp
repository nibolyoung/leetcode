/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<double> r;
	    for (int i = 0; i < nums.size(); ++i) {
		    auto s = r.lower_bound((double)nums[i] - (double)t);
		    if (s != r.end() && *s <= (double)nums[i] + (double)t)  return true;
		    r.insert(nums[i]);
		    if (r.size() > k)  r.erase(nums[i - k]);
	    }
	    return false;
    }
};
// @lc code=end

