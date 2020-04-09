/*
 * @lc app=leetcode.cn id=1385 lang=cpp
 *
 * [1385] 两个数组间的距离值
 */

// @lc code=start
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        map<int,int> p,q;
        for(auto i:arr1)  p[i]++;
        for(auto i:arr2)  q[i]++;
        int res=0;
        for(auto itr=p.begin();itr!=p.end();++itr){
            bool is=true;
            for(auto jtr=q.begin();jtr!=q.end();++jtr){
                if(abs(itr->first-jtr->first)<=d){
                    is=false;
                    break;
                }
            }
            if(is)  res+=itr->second;
        }
        return res;
    }
};
// @lc code=end

