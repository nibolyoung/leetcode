/*
 * @lc app=leetcode.cn id=1436 lang=cpp
 *
 * [1436] 旅行终点站
 */

// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> p;
        for(auto a:paths)  p[a[0]]=a[1];
        string s=paths[0][0];
        while(p[s].length()>0)  s=p[s];
        return s;
    }
};
// @lc code=end

