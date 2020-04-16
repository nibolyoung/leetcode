/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
    static bool cmp (vector<int>& I1, vector<int>& I2) {
        return I1[0] < I2[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > s;
        if(intervals.size()==0)  return s;
        sort(intervals.begin(),intervals.end(),cmp);
        int left=intervals[0][0],right=intervals[0][1];
        for(auto i:intervals){
            if(i[0]<=right)  right=max(right,i[1]);
            else{
                s.push_back({left,right});
                left=i[0];
                right=i[1];
            }
        }
        s.push_back({left,right});
        return s;
    }
};
// @lc code=end

