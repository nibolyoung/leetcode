/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
    vector<int> s;
public:
    NumArray(vector<int>& nums) {
        s=nums;
    }
    
    int sumRange(int i, int j) {
        int res=0;
        for(int a=i;a<=j;a++)  res+=s[a];
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

