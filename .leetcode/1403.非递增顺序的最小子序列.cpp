/*
 * @lc app=leetcode.cn id=1403 lang=cpp
 *
 * [1403] 非递增顺序的最小子序列
 */

// @lc code=start
class Solution {
    static bool cmp(int a,int b){
        return a>b;
    }
public:
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()==1)  return nums;
        sort(nums.begin(),nums.end(),cmp);
        int sum=0,now=0;
        for(auto n:nums)  sum+=n;
        vector<int> s;
        for(auto n:nums){
            now+=n;
            s.push_back(n);
            if(now>sum-now)  break;
        }
        return s;
    }
};
// @lc code=end

