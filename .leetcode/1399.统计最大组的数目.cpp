/*
 * @lc app=leetcode.cn id=1399 lang=cpp
 *
 * [1399] 统计最大组的数目
 */

// @lc code=start
class Solution {
    int getNum(int n){
        int m=n,res=0;
        while(m>0){
            res+=m%10;
            m/=10;
        }
        return res;
    }
public:
    int countLargestGroup(int n) {
        map<int,int> p;
        for(int i=1;i<=n;i++)  p[getNum(i)]++;
        int max=0,res=0;
        for(auto i=p.begin();i!=p.end();++i){
            if(i->second>max)  max=i->second;
        }
        for(auto i=p.begin();i!=p.end();++i){
            if(i->second==max)  res++;
        }
        return res;
    }
};
// @lc code=end

