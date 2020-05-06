/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> s;
        int max=candies[0];
        for(auto c:candies){
            if(max<c)  max=c;
        }
        for(auto c:candies){
            if(c+extraCandies>=max)  s.push_back(true);
            else s.push_back(false);
        }
        return s;
    }
};
// @lc code=end

