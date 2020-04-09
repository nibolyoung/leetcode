/*
 * @lc app=leetcode.cn id=1404 lang=cpp
 *
 * [1404] 将二进制表示减到 1 的步骤数
 */

// @lc code=start
class Solution {
    string addOne(string s){
        int jin=1;
        for(int i=s.length()-1;i>=0;i--){
            int tmp=(int)(s[i]-48)+jin;
            if(tmp==2){
                s[i]='0';
                jin=1;
            }else{
                jin=0;
                s[i]=(char)(tmp+48);
            }
        }
        if(jin==1)  s="1"+s;
        return s;
    }
public:
    int numSteps(string s) {
        if(s.length()==1)  return 0;
        int sum=0;
        while(s.length()>1){
            if(s[s.length()-1]=='0')  s=s.substr(0,s.length()-1);
            else s=addOne(s);
            sum++;
        }
        return sum;
    }
};
// @lc code=end

