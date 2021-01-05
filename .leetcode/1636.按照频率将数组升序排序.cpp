/*
 * @lc app=leetcode.cn id=1636 lang=cpp
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
class Solution {
public:
    vector<int> frequencySort(vector<int>& n) {
        int m[201]{0};
	    for(const auto & i : n) m[i+100]++;        
	    sort(begin(n), end(n), [&](auto & x, auto & y){ return m[x+100]<m[y+100] 
            or m[x+100]==m[y+100] and x>y; });        
	    return n;
    }
};
// @lc code=end

