/*
 * @lc app=leetcode.cn id=1481 lang=cpp
 *
 * [1481] 不同整数的最少数目
 */

// @lc code=start
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> p;
        for(auto i:arr)  p[i]++;
        int sum=0;
        vector<int> s;
        for(auto i=p.begin();i!=p.end();++i)  s.push_back(i->second);
        sort(s.begin(),s.end());
        if(k==0)  return s.size();
        if(k==arr.size())  return 0;
        if(k<s[0])  return s.size();
        for(int i=0;i<s.size()-1;i++){
            sum+=s[i];
            if(sum==k)  return s.size()-1-i;
            if(sum<k&&sum+s[i+1]>k)  return s.size()-1-i;
        }
        return 0;
    }
};
// @lc code=end

