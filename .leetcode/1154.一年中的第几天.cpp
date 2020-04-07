/*
 * @lc app=leetcode.cn id=1154 lang=cpp
 *
 * [1154] 一年中的第几天
 */

// @lc code=start
class Solution {
    int strToInt(string s){
        int res=0;
        for(int i=0;i<s.length();i++){
            res+=((int)(s[i]-48))*pow(10,s.length()-1-i);
        }
        return res;
    }
public:
    int dayOfYear(string date) {
        int y,m,d;
        y=strToInt(date.substr(0,4));
        m=strToInt(date.substr(5,2));
        d=strToInt(date.substr(8,2));
        int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if((y%4==0&&y%100!=0)||y%400==0)  month[1]=29;
        if(m==1)  return d;
        int sum=0;
        for(int i=0;i<m-1;i++)  sum+=month[i];
        return sum+d;
    }
};
// @lc code=end

