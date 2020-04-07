/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
    static bool cmp(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> s;
        if (intervals.size() == 0)   return s;
        sort(intervals.begin(), intervals.end(), cmp);
        int left = intervals[0][0], right = intervals[0][1];
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= right)
                right = max(right,intervals[i][1]);
            else {
                s.push_back({left,right});
                left = intervals[i][0];
                right = intervals[i][1];
            }
        }
        s.push_back({left,right});
        return s;
    }
};
// @lc code=end

