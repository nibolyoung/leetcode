/*
 * @lc app=leetcode.cn id=324 lang=cpp
 *
 * [324] 摆动排序 II
 */

// @lc code=start
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> s(nums);
        sort(s.begin(), s.end());
        for (int i=nums.size()-1, j=0, k=i/2+1; i>=0; i--)
            nums[i] = s[i&1 ? k++ : j++];
    }
};
// @lc code=end

