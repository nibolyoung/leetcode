/*
 * @lc app=leetcode.cn id=1557 lang=cpp
 *
 * [1557] 可以到达所有点的最少点数目
 */

// @lc code=start
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> conornot(n,0); 
        for(auto i: edges) conornot[i[1]]=1;
        vector<int> res;
        for(int i=0;i<n;i++){
            if( conornot[i]==0) res.push_back(i);
        }
        return res;
    }
};
// @lc code=end

