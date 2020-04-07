/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        if(x==0)  return 0;
        bool isFu=false;
        if(x<0)  isFu=true,x=-x;
        long sum=0;
        vector<int> s;
        while(x>0){
            s.push_back(x%10);
            x/=10;
        }
        for(int i=0;i<s.size();i++){
            sum+=s[i]*pow(10,s.size()-1-i);
        }
        sum=isFu?-sum:sum;
        if(sum<-pow(2,31)||sum>pow(2,31)+1)  return 0;
        return sum;
    }
};
// @lc code=end

