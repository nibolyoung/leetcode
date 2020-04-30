/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        if(n==1)  return true;
        map<int,bool> p;
        while(n>1){
            int m=n,tmp=0;
            while(m>0){
                tmp+=(m%10)*(m%10);
                m/=10;
            }
            if(tmp==1)  return true;
            if(p[tmp])  return false;
            p[tmp]=true;
            n=tmp;
        }
        return true;
    }
};
// @lc code=end

