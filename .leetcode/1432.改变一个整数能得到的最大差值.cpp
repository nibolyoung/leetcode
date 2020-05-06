/*
 * @lc app=leetcode.cn id=1432 lang=cpp
 *
 * [1432] 改变一个整数能得到的最大差值
 */

// @lc code=start
class Solution {
    int toMax(int n){
        int res=0;
        string s="";
        while(n>0){
            s=((char)(n%10+48))+s;
            n/=10;
        }
        int changeNum=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]!='9'){
                changeNum=(int)(s[i]-48);
                break;
            }
        }
        for(int i=0;i<s.length();i++){
            if((int)(s[i]-48)==changeNum)  res+=9*pow(10,s.length()-1-i);
            else res+=(int)(s[i]-48)*pow(10,s.length()-1-i);
        }
        return res;
    }
    int toMin(int n){
        int res=0;
        string s="";
        while(n>0){
            s=((char)(n%10+48))+s;
            n/=10;
        }
        int changeNum=-1;
        if(s[0]!='1'){
            changeNum=(int)(s[0]-48);
            for(int i=0;i<s.length();i++){
                if((int)(s[i]-48)==changeNum)  res+=pow(10,s.length()-1-i);
                else res+=(int)(s[i]-48)*pow(10,s.length()-1-i);
            }
        }else{
            for(int i=1;i<s.length();i++){
                if(s[i]!=s[0]&&s[i]!='0'){
                    changeNum=(int)(s[i]-48);
                    break;
                }
            }
            for(int i=0;i<s.length();i++){
                if((int)(s[i]-48)!=changeNum)  res+=(int)(s[i]-48)*pow(10,s.length()-1-i);
            }
        }
        return res;
    }
public:
    int maxDiff(int num) {
        return toMax(num)-toMin(num);
    }
};
// @lc code=end

